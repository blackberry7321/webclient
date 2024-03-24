#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , portButtonGroup(new QButtonGroup(this))
{
    ui->setupUi(this);

    QObject::connect(&sslSocket_, &QSslSocket::connected, this, &Widget::doConnected);
    QObject::connect(&sslSocket_, &QSslSocket::disconnected, this, &Widget::doDisconnected);
    QObject::connect(&sslSocket_, &QSslSocket::readyRead, this, &Widget::doReadyRead);

    QObject::connect(&tcpSocket_, &QTcpSocket::connected, this, &Widget::doConnected);
    QObject::connect(&tcpSocket_, &QTcpSocket::disconnected, this, &Widget::doDisconnected);
    QObject::connect(&tcpSocket_, &QTcpSocket::readyRead, this, &Widget::doReadyRead);


    portButtonGroup->addButton(ui->cbTCP, 0); // ID 0
    portButtonGroup->addButton(ui->cbSSL, 1); // ID 1

    portButtonGroup->button(0)->setChecked(true);
    ui->lePort->setText("80");
    connect(portButtonGroup, &QButtonGroup::buttonToggled, [this](QAbstractButton* button, bool checked)
    {
        int id = portButtonGroup->id(button);
        this->onPortButtonToggled(id, checked);
    });
}

Widget::~Widget()
{
    delete ui;
}
void Widget::doConnected()
{
    ui->pteMessage->insertPlainText("Connected\r\n");
}
void Widget::doDisconnected()
{
    ui->pteMessage->insertPlainText("Disconnected\r\n");
}
void Widget::doReadyRead()
{
    if (useSsl)
    {
        ui->pteMessage->insertPlainText(sslSocket_.readAll());
    } else
    {
        ui->pteMessage->insertPlainText(tcpSocket_.readAll());
    }
}

void Widget::on_pbConnect_clicked()
{
    if (useSsl)
    {
        sslSocket_.connectToHostEncrypted(ui->leHost->text(), ui->lePort->text().toUShort());
    } else
    {
        tcpSocket_.connectToHost(ui->leHost->text(), ui->lePort->text().toUShort());
    }
}


void Widget::on_pbDisconnect_clicked()
{
    if (useSsl)
    {
        sslSocket_.close();
    } else
    {
        tcpSocket_.close();
    }
}


void Widget::on_pbSend_clicked()
{
    if (useSsl)
    {
        sslSocket_.write(ui->pteSend->toPlainText().toUtf8());
    } else
    {
        tcpSocket_.write(ui->pteSend->toPlainText().toUtf8());
    }
}


void Widget::on_pbClear_clicked()
{
    ui->pteMessage->clear();
}


void Widget::on_cbTCP_stateChanged(int arg1)
{
    if (arg1)
    {
        useSsl = false;
        ui->lePort->setText("80");
    }
}

void Widget::on_cbSSL_stateChanged(int arg1)
{
    if (arg1) {
        useSsl = true;
        ui->lePort->setText("443");
    }
}


void Widget::onPortButtonToggled(int id, bool checked)
{
    if (checked) {
        if (id == 0)
        { // TCP
            ui->lePort->setText("80");
        } else if (id == 1)
        { //
            ui->lePort->setText("443");
        }
    }
}
