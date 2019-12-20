/****************************************************************************
** Meta object code from reading C++ file 'expr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../expr/expr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'expr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_expr_t {
    QByteArrayData data[19];
    char stringdata[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_expr_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_expr_t qt_meta_stringdata_expr = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 7),
QT_MOC_LITERAL(2, 13, 0),
QT_MOC_LITERAL(3, 14, 7),
QT_MOC_LITERAL(4, 22, 7),
QT_MOC_LITERAL(5, 30, 7),
QT_MOC_LITERAL(6, 38, 7),
QT_MOC_LITERAL(7, 46, 7),
QT_MOC_LITERAL(8, 54, 7),
QT_MOC_LITERAL(9, 62, 7),
QT_MOC_LITERAL(10, 70, 7),
QT_MOC_LITERAL(11, 78, 7),
QT_MOC_LITERAL(12, 86, 9),
QT_MOC_LITERAL(13, 96, 9),
QT_MOC_LITERAL(14, 106, 10),
QT_MOC_LITERAL(15, 117, 9),
QT_MOC_LITERAL(16, 127, 9),
QT_MOC_LITERAL(17, 137, 10),
QT_MOC_LITERAL(18, 148, 9)
    },
    "expr\0getBtn0\0\0getBtn1\0getBtn2\0getBtn3\0"
    "getBtn4\0getBtn5\0getBtn6\0getBtn7\0getBtn8\0"
    "getBtn9\0getBtnAdd\0getBtnMin\0getBtnPlus\0"
    "getBtnDiv\0getBtnEqu\0getBtnDele\0getBtnExt\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_expr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08,
       3,    0,  100,    2, 0x08,
       4,    0,  101,    2, 0x08,
       5,    0,  102,    2, 0x08,
       6,    0,  103,    2, 0x08,
       7,    0,  104,    2, 0x08,
       8,    0,  105,    2, 0x08,
       9,    0,  106,    2, 0x08,
      10,    0,  107,    2, 0x08,
      11,    0,  108,    2, 0x08,
      12,    0,  109,    2, 0x08,
      13,    0,  110,    2, 0x08,
      14,    0,  111,    2, 0x08,
      15,    0,  112,    2, 0x08,
      16,    0,  113,    2, 0x08,
      17,    0,  114,    2, 0x08,
      18,    0,  115,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void expr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        expr *_t = static_cast<expr *>(_o);
        switch (_id) {
        case 0: _t->getBtn0(); break;
        case 1: _t->getBtn1(); break;
        case 2: _t->getBtn2(); break;
        case 3: _t->getBtn3(); break;
        case 4: _t->getBtn4(); break;
        case 5: _t->getBtn5(); break;
        case 6: _t->getBtn6(); break;
        case 7: _t->getBtn7(); break;
        case 8: _t->getBtn8(); break;
        case 9: _t->getBtn9(); break;
        case 10: _t->getBtnAdd(); break;
        case 11: _t->getBtnMin(); break;
        case 12: _t->getBtnPlus(); break;
        case 13: _t->getBtnDiv(); break;
        case 14: _t->getBtnEqu(); break;
        case 15: _t->getBtnDele(); break;
        case 16: _t->getBtnExt(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject expr::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_expr.data,
      qt_meta_data_expr,  qt_static_metacall, 0, 0}
};


const QMetaObject *expr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *expr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_expr.stringdata))
        return static_cast<void*>(const_cast< expr*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int expr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
