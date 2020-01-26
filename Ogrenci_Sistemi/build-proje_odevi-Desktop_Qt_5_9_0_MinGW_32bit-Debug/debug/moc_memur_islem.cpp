/****************************************************************************
** Meta object code from reading C++ file 'memur_islem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../proje_odevi/memur_islem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memur_islem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_memur_islem_t {
    QByteArrayData data[11];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_memur_islem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_memur_islem_t qt_meta_stringdata_memur_islem = {
    {
QT_MOC_LITERAL(0, 0, 11), // "memur_islem"
QT_MOC_LITERAL(1, 12, 22), // "on_ogr_bolum_activated"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "arg1"
QT_MOC_LITERAL(4, 41, 28), // "on_ders_acma_bolum_activated"
QT_MOC_LITERAL(5, 70, 22), // "on_ders_kaydet_clicked"
QT_MOC_LITERAL(6, 93, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(7, 115, 4), // "arg2"
QT_MOC_LITERAL(8, 120, 21), // "on_ogr__kayit_clicked"
QT_MOC_LITERAL(9, 142, 29), // "on_akademisyen_ders_activated"
QT_MOC_LITERAL(10, 172, 20) // "on_ogr_ad_textEdited"

    },
    "memur_islem\0on_ogr_bolum_activated\0\0"
    "arg1\0on_ders_acma_bolum_activated\0"
    "on_ders_kaydet_clicked\0on_comboBox_activated\0"
    "arg2\0on_ogr__kayit_clicked\0"
    "on_akademisyen_ders_activated\0"
    "on_ogr_ad_textEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_memur_islem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       5,    0,   55,    2, 0x08 /* Private */,
       6,    1,   56,    2, 0x08 /* Private */,
       8,    0,   59,    2, 0x08 /* Private */,
       9,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void memur_islem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        memur_islem *_t = static_cast<memur_islem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ogr_bolum_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_ders_acma_bolum_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_ders_kaydet_clicked(); break;
        case 3: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_ogr__kayit_clicked(); break;
        case 5: _t->on_akademisyen_ders_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_ogr_ad_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject memur_islem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_memur_islem.data,
      qt_meta_data_memur_islem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *memur_islem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *memur_islem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_memur_islem.stringdata0))
        return static_cast<void*>(const_cast< memur_islem*>(this));
    return QWidget::qt_metacast(_clname);
}

int memur_islem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
