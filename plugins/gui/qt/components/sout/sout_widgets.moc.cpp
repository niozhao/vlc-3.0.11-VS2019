/****************************************************************************
** Meta object code from reading C++ file 'sout_widgets.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/components/sout/sout_widgets.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sout_widgets.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VirtualDestBox_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VirtualDestBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VirtualDestBox_t qt_meta_stringdata_VirtualDestBox = {
    {
QT_MOC_LITERAL(0, 0, 14), // "VirtualDestBox"
QT_MOC_LITERAL(1, 15, 10), // "mrlUpdated"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "VirtualDestBox\0mrlUpdated\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VirtualDestBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void VirtualDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VirtualDestBox *_t = static_cast<VirtualDestBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mrlUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VirtualDestBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VirtualDestBox::mrlUpdated)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject VirtualDestBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VirtualDestBox.data,
      qt_meta_data_VirtualDestBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VirtualDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualDestBox.stringdata0))
        return static_cast<void*>(const_cast< VirtualDestBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int VirtualDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void VirtualDestBox::mrlUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_FileDestBox_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileDestBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileDestBox_t qt_meta_stringdata_FileDestBox = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FileDestBox"
QT_MOC_LITERAL(1, 12, 10), // "fileBrowse"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "FileDestBox\0fileBrowse\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileDestBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void FileDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileDestBox *_t = static_cast<FileDestBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileBrowse(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FileDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_FileDestBox.data,
      qt_meta_data_FileDestBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileDestBox.stringdata0))
        return static_cast<void*>(const_cast< FileDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int FileDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_HTTPDestBox_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HTTPDestBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HTTPDestBox_t qt_meta_stringdata_HTTPDestBox = {
    {
QT_MOC_LITERAL(0, 0, 11) // "HTTPDestBox"

    },
    "HTTPDestBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HTTPDestBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void HTTPDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject HTTPDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_HTTPDestBox.data,
      qt_meta_data_HTTPDestBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HTTPDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTTPDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HTTPDestBox.stringdata0))
        return static_cast<void*>(const_cast< HTTPDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int HTTPDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_MMSHDestBox_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MMSHDestBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MMSHDestBox_t qt_meta_stringdata_MMSHDestBox = {
    {
QT_MOC_LITERAL(0, 0, 11) // "MMSHDestBox"

    },
    "MMSHDestBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MMSHDestBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MMSHDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MMSHDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_MMSHDestBox.data,
      qt_meta_data_MMSHDestBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MMSHDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MMSHDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MMSHDestBox.stringdata0))
        return static_cast<void*>(const_cast< MMSHDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int MMSHDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_RTSPDestBox_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RTSPDestBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RTSPDestBox_t qt_meta_stringdata_RTSPDestBox = {
    {
QT_MOC_LITERAL(0, 0, 11) // "RTSPDestBox"

    },
    "RTSPDestBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RTSPDestBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RTSPDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject RTSPDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_RTSPDestBox.data,
      qt_meta_data_RTSPDestBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RTSPDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RTSPDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RTSPDestBox.stringdata0))
        return static_cast<void*>(const_cast< RTSPDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int RTSPDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_UDPDestBox_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPDestBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPDestBox_t qt_meta_stringdata_UDPDestBox = {
    {
QT_MOC_LITERAL(0, 0, 10) // "UDPDestBox"

    },
    "UDPDestBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPDestBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void UDPDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject UDPDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_UDPDestBox.data,
      qt_meta_data_UDPDestBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UDPDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UDPDestBox.stringdata0))
        return static_cast<void*>(const_cast< UDPDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int UDPDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_RTPDestBox_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RTPDestBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RTPDestBox_t qt_meta_stringdata_RTPDestBox = {
    {
QT_MOC_LITERAL(0, 0, 10) // "RTPDestBox"

    },
    "RTPDestBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RTPDestBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RTPDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject RTPDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_RTPDestBox.data,
      qt_meta_data_RTPDestBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RTPDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RTPDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RTPDestBox.stringdata0))
        return static_cast<void*>(const_cast< RTPDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int RTPDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ICEDestBox_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ICEDestBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ICEDestBox_t qt_meta_stringdata_ICEDestBox = {
    {
QT_MOC_LITERAL(0, 0, 10) // "ICEDestBox"

    },
    "ICEDestBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ICEDestBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ICEDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ICEDestBox::staticMetaObject = {
    { &VirtualDestBox::staticMetaObject, qt_meta_stringdata_ICEDestBox.data,
      qt_meta_data_ICEDestBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ICEDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ICEDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ICEDestBox.stringdata0))
        return static_cast<void*>(const_cast< ICEDestBox*>(this));
    return VirtualDestBox::qt_metacast(_clname);
}

int ICEDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
