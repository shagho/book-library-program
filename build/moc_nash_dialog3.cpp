/****************************************************************************
** Meta object code from reading C++ file 'nash_dialog3.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Project1/nash_dialog3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nash_dialog3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nash_Dialog3_t {
    QByteArrayData data[9];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nash_Dialog3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nash_Dialog3_t qt_meta_stringdata_nash_Dialog3 = {
    {
QT_MOC_LITERAL(0, 0, 12), // "nash_Dialog3"
QT_MOC_LITERAL(1, 13, 6), // "showD2"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 1), // "r"
QT_MOC_LITERAL(4, 23, 1), // "c"
QT_MOC_LITERAL(5, 25, 1), // "d"
QT_MOC_LITERAL(6, 27, 13), // "long long int"
QT_MOC_LITERAL(7, 41, 7), // "add_row"
QT_MOC_LITERAL(8, 49, 1) // "i"

    },
    "nash_Dialog3\0showD2\0\0r\0c\0d\0long long int\0"
    "add_row\0i"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nash_Dialog3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       1,    3,   41,    2, 0x0a /* Public */,
       1,    3,   48,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 6,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void nash_Dialog3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        nash_Dialog3 *_t = static_cast<nash_Dialog3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showD2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->showD2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->showD2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long long int(*)>(_a[3]))); break;
        case 3: _t->add_row((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject nash_Dialog3::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_nash_Dialog3.data,
      qt_meta_data_nash_Dialog3,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *nash_Dialog3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nash_Dialog3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nash_Dialog3.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int nash_Dialog3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
