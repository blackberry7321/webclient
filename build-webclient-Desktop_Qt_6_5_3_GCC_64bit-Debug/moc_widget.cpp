/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../webclient/widget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWidgetENDCLASS = QtMocHelpers::stringData(
    "Widget",
    "doConnected",
    "",
    "doDisconnected",
    "doReadyRead",
    "on_pbConnect_clicked",
    "on_pbDisconnect_clicked",
    "on_pbSend_clicked",
    "on_pbClear_clicked",
    "on_cbTCP_stateChanged",
    "arg1",
    "on_cbSSL_stateChanged",
    "onPortButtonToggled",
    "id",
    "checked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[7];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[12];
    char stringdata5[21];
    char stringdata6[24];
    char stringdata7[18];
    char stringdata8[19];
    char stringdata9[22];
    char stringdata10[5];
    char stringdata11[22];
    char stringdata12[20];
    char stringdata13[3];
    char stringdata14[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWidgetENDCLASS_t qt_meta_stringdata_CLASSWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Widget"
        QT_MOC_LITERAL(7, 11),  // "doConnected"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 14),  // "doDisconnected"
        QT_MOC_LITERAL(35, 11),  // "doReadyRead"
        QT_MOC_LITERAL(47, 20),  // "on_pbConnect_clicked"
        QT_MOC_LITERAL(68, 23),  // "on_pbDisconnect_clicked"
        QT_MOC_LITERAL(92, 17),  // "on_pbSend_clicked"
        QT_MOC_LITERAL(110, 18),  // "on_pbClear_clicked"
        QT_MOC_LITERAL(129, 21),  // "on_cbTCP_stateChanged"
        QT_MOC_LITERAL(151, 4),  // "arg1"
        QT_MOC_LITERAL(156, 21),  // "on_cbSSL_stateChanged"
        QT_MOC_LITERAL(178, 19),  // "onPortButtonToggled"
        QT_MOC_LITERAL(198, 2),  // "id"
        QT_MOC_LITERAL(201, 7)   // "checked"
    },
    "Widget",
    "doConnected",
    "",
    "doDisconnected",
    "doReadyRead",
    "on_pbConnect_clicked",
    "on_pbDisconnect_clicked",
    "on_pbSend_clicked",
    "on_pbClear_clicked",
    "on_cbTCP_stateChanged",
    "arg1",
    "on_cbSSL_stateChanged",
    "onPortButtonToggled",
    "id",
    "checked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x0a,    1 /* Public */,
       3,    0,   75,    2, 0x0a,    2 /* Public */,
       4,    0,   76,    2, 0x0a,    3 /* Public */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    0,   78,    2, 0x08,    5 /* Private */,
       7,    0,   79,    2, 0x08,    6 /* Private */,
       8,    0,   80,    2, 0x08,    7 /* Private */,
       9,    1,   81,    2, 0x08,    8 /* Private */,
      11,    1,   84,    2, 0x08,   10 /* Private */,
      12,    2,   87,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   13,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Widget, std::true_type>,
        // method 'doConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbConnect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbDisconnect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbSend_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbClear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cbTCP_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_cbSSL_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onPortButtonToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->doConnected(); break;
        case 1: _t->doDisconnected(); break;
        case 2: _t->doReadyRead(); break;
        case 3: _t->on_pbConnect_clicked(); break;
        case 4: _t->on_pbDisconnect_clicked(); break;
        case 5: _t->on_pbSend_clicked(); break;
        case 6: _t->on_pbClear_clicked(); break;
        case 7: _t->on_cbTCP_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_cbSSL_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->onPortButtonToggled((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
