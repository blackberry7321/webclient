#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QSslSocket>
#include <QUdpSocket>
#include <QButtonGroup>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QTcpSocket tcpSocket_;
    QSslSocket sslSocket_;
    bool useSsl = false;
public slots:
    void doConnected();
    void doDisconnected();
    void doReadyRead();

private slots:
    void on_pbConnect_clicked();

    void on_pbDisconnect_clicked();

    void on_pbSend_clicked();

    void on_pbClear_clicked();

    void on_cbTCP_stateChanged(int arg1);

    void on_cbSSL_stateChanged(int arg1);

    void onPortButtonToggled(int id, bool checked);

private:
    Ui::Widget *ui;
    QButtonGroup *portButtonGroup;
};
#endif // WIDGET_H
