/****************************************************************************
** Meta object code from reading C++ file 'open.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/dialogs/open.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'open.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpenDialog_t {
    QByteArrayData data[17];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenDialog_t qt_meta_stringdata_OpenDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "OpenDialog"
QT_MOC_LITERAL(1, 11, 11), // "selectSlots"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "play"
QT_MOC_LITERAL(4, 29, 6), // "stream"
QT_MOC_LITERAL(5, 36, 15), // "b_transode_only"
QT_MOC_LITERAL(6, 52, 7), // "enqueue"
QT_MOC_LITERAL(7, 60, 9), // "b_enqueue"
QT_MOC_LITERAL(8, 70, 9), // "transcode"
QT_MOC_LITERAL(9, 80, 13), // "setMenuAction"
QT_MOC_LITERAL(10, 94, 6), // "cancel"
QT_MOC_LITERAL(11, 101, 5), // "close"
QT_MOC_LITERAL(12, 107, 19), // "toggleAdvancedPanel"
QT_MOC_LITERAL(13, 127, 9), // "updateMRL"
QT_MOC_LITERAL(14, 137, 16), // "newCachingMethod"
QT_MOC_LITERAL(15, 154, 13), // "signalCurrent"
QT_MOC_LITERAL(16, 168, 16) // "browseInputSlave"

    },
    "OpenDialog\0selectSlots\0\0play\0stream\0"
    "b_transode_only\0enqueue\0b_enqueue\0"
    "transcode\0setMenuAction\0cancel\0close\0"
    "toggleAdvancedPanel\0updateMRL\0"
    "newCachingMethod\0signalCurrent\0"
    "browseInputSlave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    1,   96,    2, 0x0a /* Public */,
       4,    0,   99,    2, 0x2a /* Public | MethodCloned */,
       6,    1,  100,    2, 0x0a /* Public */,
       6,    0,  103,    2, 0x2a /* Public | MethodCloned */,
       8,    0,  104,    2, 0x0a /* Public */,
       9,    0,  105,    2, 0x08 /* Private */,
      10,    0,  106,    2, 0x08 /* Private */,
      11,    0,  107,    2, 0x08 /* Private */,
      12,    0,  108,    2, 0x08 /* Private */,
      13,    2,  109,    2, 0x08 /* Private */,
      13,    0,  114,    2, 0x08 /* Private */,
      14,    1,  115,    2, 0x08 /* Private */,
      15,    1,  118,    2, 0x08 /* Private */,
      16,    0,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void OpenDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenDialog *_t = static_cast<OpenDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectSlots(); break;
        case 1: _t->play(); break;
        case 2: _t->stream((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->stream(); break;
        case 4: _t->enqueue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->enqueue(); break;
        case 6: _t->transcode(); break;
        case 7: _t->setMenuAction(); break;
        case 8: _t->cancel(); break;
        case 9: _t->close(); break;
        case 10: _t->toggleAdvancedPanel(); break;
        case 11: _t->updateMRL((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->updateMRL(); break;
        case 13: _t->newCachingMethod((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->signalCurrent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->browseInputSlave(); break;
        default: ;
        }
    }
}

const QMetaObject OpenDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_OpenDialog.data,
      qt_meta_data_OpenDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpenDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpenDialog.stringdata0))
        return static_cast<void*>(const_cast< OpenDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int OpenDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
