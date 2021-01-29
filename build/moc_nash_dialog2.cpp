/****************************************************************************
** Meta object code from reading C++ file 'nash_dialog2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Project1/nash_dialog2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nash_dialog2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nash_Dialog2_t {
    QByteArrayData data[19];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nash_Dialog2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nash_Dialog2_t qt_meta_stringdata_nash_Dialog2 = {
    {
QT_MOC_LITERAL(0, 0, 12), // "nash_Dialog2"
QT_MOC_LITERAL(1, 13, 8), // "showList"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "data"
QT_MOC_LITERAL(4, 28, 16), // "getTableArgument"
QT_MOC_LITERAL(5, 45, 10), // "nash_books"
QT_MOC_LITERAL(6, 56, 3), // "tmp"
QT_MOC_LITERAL(7, 60, 15), // "getListArgument"
QT_MOC_LITERAL(8, 76, 8), // "setQmapG"
QT_MOC_LITERAL(9, 85, 32), // "QMap<QString,QList<nash_books> >"
QT_MOC_LITERAL(10, 118, 8), // "setQmapP"
QT_MOC_LITERAL(11, 127, 8), // "setQmapW"
QT_MOC_LITERAL(12, 136, 8), // "setQmapY"
QT_MOC_LITERAL(13, 145, 28), // "QMap<int,QList<nash_books> >"
QT_MOC_LITERAL(14, 174, 8), // "setTitle"
QT_MOC_LITERAL(15, 183, 5), // "title"
QT_MOC_LITERAL(16, 189, 23), // "on_listWidget_activated"
QT_MOC_LITERAL(17, 213, 11), // "QModelIndex"
QT_MOC_LITERAL(18, 225, 5) // "index"

    },
    "nash_Dialog2\0showList\0\0data\0"
    "getTableArgument\0nash_books\0tmp\0"
    "getListArgument\0setQmapG\0"
    "QMap<QString,QList<nash_books> >\0"
    "setQmapP\0setQmapW\0setQmapY\0"
    "QMap<int,QList<nash_books> >\0setTitle\0"
    "title\0on_listWidget_activated\0QModelIndex\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nash_Dialog2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
      10,    1,   69,    2, 0x0a /* Public */,
      11,    1,   72,    2, 0x0a /* Public */,
      12,    1,   75,    2, 0x0a /* Public */,
      14,    1,   78,    2, 0x0a /* Public */,
      16,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    0x80000000 | 5, 0x80000000 | 5,    6,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 9,    6,
    QMetaType::Void, 0x80000000 | 9,    6,
    QMetaType::Void, 0x80000000 | 9,    6,
    QMetaType::Void, 0x80000000 | 13,    6,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void nash_Dialog2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        nash_Dialog2 *_t = static_cast<nash_Dialog2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: { nash_books _r = _t->getTableArgument((*reinterpret_cast< nash_books(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< nash_books*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->getListArgument();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setQmapG((*reinterpret_cast< QMap<QString,QList<nash_books> >(*)>(_a[1]))); break;
        case 4: _t->setQmapP((*reinterpret_cast< QMap<QString,QList<nash_books> >(*)>(_a[1]))); break;
        case 5: _t->setQmapW((*reinterpret_cast< QMap<QString,QList<nash_books> >(*)>(_a[1]))); break;
        case 6: _t->setQmapY((*reinterpret_cast< QMap<int,QList<nash_books> >(*)>(_a[1]))); break;
        case 7: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->on_listWidget_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject nash_Dialog2::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_nash_Dialog2.data,
      qt_meta_data_nash_Dialog2,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *nash_Dialog2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nash_Dialog2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nash_Dialog2.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int nash_Dialog2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
