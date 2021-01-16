/****************************************************************************
** Meta object code from reading C++ file 'mediainfo.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/dialogs/mediainfo.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediainfo.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MediaInfoDialog_t {
    QByteArrayData data[10];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MediaInfoDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MediaInfoDialog_t qt_meta_stringdata_MediaInfoDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MediaInfoDialog"
QT_MOC_LITERAL(1, 16, 13), // "updateAllTabs"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "input_item_t*"
QT_MOC_LITERAL(4, 45, 12), // "clearAllTabs"
QT_MOC_LITERAL(5, 58, 5), // "close"
QT_MOC_LITERAL(6, 64, 8), // "saveMeta"
QT_MOC_LITERAL(7, 73, 13), // "updateButtons"
QT_MOC_LITERAL(8, 87, 5), // "i_tab"
QT_MOC_LITERAL(9, 93, 9) // "updateURI"

    },
    "MediaInfoDialog\0updateAllTabs\0\0"
    "input_item_t*\0clearAllTabs\0close\0"
    "saveMeta\0updateButtons\0i_tab\0updateURI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediaInfoDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void MediaInfoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MediaInfoDialog *_t = static_cast<MediaInfoDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateAllTabs((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 1: _t->clearAllTabs(); break;
        case 2: _t->close(); break;
        case 3: _t->saveMeta(); break;
        case 4: _t->updateButtons((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateURI((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MediaInfoDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_MediaInfoDialog.data,
      qt_meta_data_MediaInfoDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MediaInfoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MediaInfoDialog.stringdata0))
        return static_cast<void*>(const_cast< MediaInfoDialog*>(this));
    if (!strcmp(_clname, "Singleton<MediaInfoDialog>"))
        return static_cast< Singleton<MediaInfoDialog>*>(const_cast< MediaInfoDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int MediaInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
