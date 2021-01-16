/****************************************************************************
** Meta object code from reading C++ file 'EPGWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/components/epg/EPGWidget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPGWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EPGWidget_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EPGWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EPGWidget_t qt_meta_stringdata_EPGWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "EPGWidget"
QT_MOC_LITERAL(1, 10, 20), // "itemSelectionChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "EPGItem*"
QT_MOC_LITERAL(4, 41, 16), // "programActivated"
QT_MOC_LITERAL(5, 58, 7), // "setZoom"
QT_MOC_LITERAL(6, 66, 5), // "level"
QT_MOC_LITERAL(7, 72, 9), // "updateEPG"
QT_MOC_LITERAL(8, 82, 13), // "input_item_t*"
QT_MOC_LITERAL(9, 96, 15) // "activateProgram"

    },
    "EPGWidget\0itemSelectionChanged\0\0"
    "EPGItem*\0programActivated\0setZoom\0"
    "level\0updateEPG\0input_item_t*\0"
    "activateProgram"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EPGWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void EPGWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EPGWidget *_t = static_cast<EPGWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemSelectionChanged((*reinterpret_cast< EPGItem*(*)>(_a[1]))); break;
        case 1: _t->programActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateEPG((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 4: _t->activateProgram((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EPGWidget::*_t)(EPGItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EPGWidget::itemSelectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (EPGWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EPGWidget::programActivated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject EPGWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EPGWidget.data,
      qt_meta_data_EPGWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EPGWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EPGWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EPGWidget.stringdata0))
        return static_cast<void*>(const_cast< EPGWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int EPGWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void EPGWidget::itemSelectionChanged(EPGItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EPGWidget::programActivated(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
