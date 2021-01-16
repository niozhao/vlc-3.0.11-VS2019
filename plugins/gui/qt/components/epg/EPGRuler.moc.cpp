/****************************************************************************
** Meta object code from reading C++ file 'EPGRuler.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/components/epg/EPGRuler.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPGRuler.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EPGRuler_t {
    QByteArrayData data[7];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EPGRuler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EPGRuler_t qt_meta_stringdata_EPGRuler = {
    {
QT_MOC_LITERAL(0, 0, 8), // "EPGRuler"
QT_MOC_LITERAL(1, 9, 8), // "setScale"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "scale"
QT_MOC_LITERAL(4, 25, 8), // "setRange"
QT_MOC_LITERAL(5, 34, 9), // "setOffset"
QT_MOC_LITERAL(6, 44, 6) // "offset"

    },
    "EPGRuler\0setScale\0\0scale\0setRange\0"
    "setOffset\0offset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EPGRuler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    2,   32,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QDateTime,    2,    2,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void EPGRuler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EPGRuler *_t = static_cast<EPGRuler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setRange((*reinterpret_cast< const QDateTime(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 2: _t->setOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject EPGRuler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EPGRuler.data,
      qt_meta_data_EPGRuler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EPGRuler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EPGRuler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EPGRuler.stringdata0))
        return static_cast<void*>(const_cast< EPGRuler*>(this));
    return QWidget::qt_metacast(_clname);
}

int EPGRuler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
