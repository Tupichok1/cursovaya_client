/****************************************************************************
** Meta object code from reading C++ file 'depositwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "depositwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'depositwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_depositWindow_t {
    QByteArrayData data[14];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_depositWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_depositWindow_t qt_meta_stringdata_depositWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "depositWindow"
QT_MOC_LITERAL(1, 14, 20), // "on_makeOrder_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 23), // "on_chooseRubles_clicked"
QT_MOC_LITERAL(4, 60, 21), // "on_chooseYuan_clicked"
QT_MOC_LITERAL(5, 82, 20), // "calculateFinalAmount"
QT_MOC_LITERAL(6, 103, 27), // "on_chooseThreeMonth_clicked"
QT_MOC_LITERAL(7, 131, 25), // "on_chooseSixMonth_clicked"
QT_MOC_LITERAL(8, 157, 28), // "on_chooseTwelveMonth_clicked"
QT_MOC_LITERAL(9, 186, 30), // "on_enterAmount_editingFinished"
QT_MOC_LITERAL(10, 217, 39), // "on_chooseOtherMonth_currentIn..."
QT_MOC_LITERAL(11, 257, 4), // "arg1"
QT_MOC_LITERAL(12, 262, 17), // "on_goBack_clicked"
QT_MOC_LITERAL(13, 280, 26) // "on_enterAmount_textChanged"

    },
    "depositWindow\0on_makeOrder_clicked\0\0"
    "on_chooseRubles_clicked\0on_chooseYuan_clicked\0"
    "calculateFinalAmount\0on_chooseThreeMonth_clicked\0"
    "on_chooseSixMonth_clicked\0"
    "on_chooseTwelveMonth_clicked\0"
    "on_enterAmount_editingFinished\0"
    "on_chooseOtherMonth_currentIndexChanged\0"
    "arg1\0on_goBack_clicked\0"
    "on_enterAmount_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_depositWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void depositWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<depositWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_makeOrder_clicked(); break;
        case 1: _t->on_chooseRubles_clicked(); break;
        case 2: _t->on_chooseYuan_clicked(); break;
        case 3: _t->calculateFinalAmount(); break;
        case 4: _t->on_chooseThreeMonth_clicked(); break;
        case 5: _t->on_chooseSixMonth_clicked(); break;
        case 6: _t->on_chooseTwelveMonth_clicked(); break;
        case 7: _t->on_enterAmount_editingFinished(); break;
        case 8: _t->on_chooseOtherMonth_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_goBack_clicked(); break;
        case 10: _t->on_enterAmount_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject depositWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_depositWindow.data,
    qt_meta_data_depositWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *depositWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *depositWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_depositWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int depositWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
