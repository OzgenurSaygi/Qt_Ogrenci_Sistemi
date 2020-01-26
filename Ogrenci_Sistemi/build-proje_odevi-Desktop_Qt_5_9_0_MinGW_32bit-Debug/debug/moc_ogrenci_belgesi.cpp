/****************************************************************************
** Meta object code from reading C++ file 'ogrenci_belgesi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../proje_odevi/ogrenci_belgesi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ogrenci_belgesi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ogrenci_belgesi_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ogrenci_belgesi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ogrenci_belgesi_t qt_meta_stringdata_ogrenci_belgesi = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ogrenci_belgesi"
QT_MOC_LITERAL(1, 16, 21), // "ogrenci_numara_alindi"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10) // "numara_ogr"

    },
    "ogrenci_belgesi\0ogrenci_numara_alindi\0"
    "\0numara_ogr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ogrenci_belgesi[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void ogrenci_belgesi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ogrenci_belgesi *_t = static_cast<ogrenci_belgesi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ogrenci_numara_alindi((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ogrenci_belgesi::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ogrenci_belgesi.data,
      qt_meta_data_ogrenci_belgesi,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ogrenci_belgesi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ogrenci_belgesi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ogrenci_belgesi.stringdata0))
        return static_cast<void*>(const_cast< ogrenci_belgesi*>(this));
    return QWidget::qt_metacast(_clname);
}

int ogrenci_belgesi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
