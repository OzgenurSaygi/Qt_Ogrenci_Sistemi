/****************************************************************************
** Meta object code from reading C++ file 'akademisyen_islem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../proje_odevi/akademisyen_islem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'akademisyen_islem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_akademisyen_islem_t {
    QByteArrayData data[10];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_akademisyen_islem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_akademisyen_islem_t qt_meta_stringdata_akademisyen_islem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "akademisyen_islem"
QT_MOC_LITERAL(1, 18, 6), // "alindi"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 2), // "ad"
QT_MOC_LITERAL(4, 29, 21), // "on_not_kaydet_clicked"
QT_MOC_LITERAL(5, 51, 21), // "on_ders_adi_activated"
QT_MOC_LITERAL(6, 73, 4), // "arg1"
QT_MOC_LITERAL(7, 78, 22), // "on_vize_not_textEdited"
QT_MOC_LITERAL(8, 101, 23), // "on_final_not_textEdited"
QT_MOC_LITERAL(9, 125, 18) // "on_temizle_clicked"

    },
    "akademisyen_islem\0alindi\0\0ad\0"
    "on_not_kaydet_clicked\0on_ders_adi_activated\0"
    "arg1\0on_vize_not_textEdited\0"
    "on_final_not_textEdited\0on_temizle_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_akademisyen_islem[] = {

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
       1,    1,   44,    2, 0x0a /* Public */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,
       8,    1,   54,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void akademisyen_islem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        akademisyen_islem *_t = static_cast<akademisyen_islem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->alindi((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_not_kaydet_clicked(); break;
        case 2: _t->on_ders_adi_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_vize_not_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_final_not_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_temizle_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject akademisyen_islem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_akademisyen_islem.data,
      qt_meta_data_akademisyen_islem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *akademisyen_islem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *akademisyen_islem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_akademisyen_islem.stringdata0))
        return static_cast<void*>(const_cast< akademisyen_islem*>(this));
    return QWidget::qt_metacast(_clname);
}

int akademisyen_islem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
