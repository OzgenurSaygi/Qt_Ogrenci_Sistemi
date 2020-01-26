/****************************************************************************
** Meta object code from reading C++ file 'ogrenci.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../proje_odevi/ogrenci.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ogrenci.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ogrenci_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ogrenci_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ogrenci_t qt_meta_stringdata_ogrenci = {
    {
QT_MOC_LITERAL(0, 0, 7), // "ogrenci"
QT_MOC_LITERAL(1, 8, 20), // "ogrenci_bilgi_gonder"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "ogrenci_adi"
QT_MOC_LITERAL(4, 42, 16), // "ogrenci_numarasi"
QT_MOC_LITERAL(5, 59, 24) // "on_ogrenci_giris_clicked"

    },
    "ogrenci\0ogrenci_bilgi_gonder\0\0ogrenci_adi\0"
    "ogrenci_numarasi\0on_ogrenci_giris_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ogrenci[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ogrenci::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ogrenci *_t = static_cast<ogrenci *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ogrenci_bilgi_gonder((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_ogrenci_giris_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ogrenci::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ogrenci::ogrenci_bilgi_gonder)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ogrenci::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ogrenci.data,
      qt_meta_data_ogrenci,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ogrenci::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ogrenci::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ogrenci.stringdata0))
        return static_cast<void*>(const_cast< ogrenci*>(this));
    return QWidget::qt_metacast(_clname);
}

int ogrenci::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ogrenci::ogrenci_bilgi_gonder(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
