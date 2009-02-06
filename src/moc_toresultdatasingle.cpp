/****************************************************************************
** Meta object code from reading C++ file 'toresultdatasingle.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultdatasingle.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultdatasingle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultDataSingle[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      24,   20,   19,   19, 0x08,
      38,   19,   19,   19, 0x08,
      68,   48,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toResultDataSingle[] = {
    "toResultDataSingle\0\0col\0showMemo(int)\0"
    "saveRow()\0topLeft,bottomRight\0"
    "dataChanged(QModelIndex,QModelIndex)\0"
};

const QMetaObject toResultDataSingle::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toResultDataSingle,
      qt_meta_data_toResultDataSingle, 0 }
};

const QMetaObject *toResultDataSingle::metaObject() const
{
    return &staticMetaObject;
}

void *toResultDataSingle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultDataSingle))
	return static_cast<void*>(const_cast< toResultDataSingle*>(this));
    return QWidget::qt_metacast(_clname);
}

int toResultDataSingle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showMemo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: saveRow(); break;
        case 2: dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
