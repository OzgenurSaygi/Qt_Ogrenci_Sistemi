/****************************************************************************
** Meta object code from reading C++ file 'ogrenci_islem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../proje_odevi/ogrenci_islem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ogrenci_islem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ogrenci_islem_t {
    QByteArrayData data[9];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ogrenci_islem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ogrenci_islem_t qt_meta_stringdata_ogrenci_islem = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ogrenci_islem"
QT_MOC_LITERAL(1, 14, 21), // "ogrenci_numara_gonder"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "numara_ogr"
QT_MOC_LITERAL(4, 48, 20), // "ogrenci_bilgi_alindi"
QT_MOC_LITERAL(5, 69, 11), // "ogrenci_adi"
QT_MOC_LITERAL(6, 81, 16), // "ogrenci_numarasi"
QT_MOC_LITERAL(7, 98, 26), // "on_ogrenci_belgesi_clicked"
QT_MOC_LITERAL(8, 125, 16) // "on_mezun_clicked"

    },
    "ogrenci_islem\0ogrenci_numara_gonder\0"
    "\0numara_ogr\0ogrenci_bilgi_alindi\0"
    "ogrenci_adi\0ogrenci_numarasi\0"
    "on_ogrenci_belgesi_clicked\0on_mezun_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ogrenci_islem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   37,    2, 0x0a /* Public */,
       7,    0,   42,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ogrenci_islem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ogrenci_islem *_t = static_cast<ogrenci_islem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ogrenci_numara_gonder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ogrenci_bilgi_alindi((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_ogrenci_belgesi_clicked(); break;
        case 3: _t->on_mezun_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ogrenci_islem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ogrenci_islem::ogrenci_numara_gonder)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ogrenci_islem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ogrenci_islem.data,
      qt_meta_data_ogrenci_islem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ogrenci_islem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ogrenci_islem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ogrenci_islem.stringdata0))
        return static_cast<void*>(const_cast< ogrenci_islem*>(this));
    return QWidget::qt_metacast(_clname);
}

int ogrenci_islem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ogrenci_islem::ogrenci_numara_gonder(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
