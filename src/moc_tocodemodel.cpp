/****************************************************************************
** Meta object code from reading C++ file 'tocodemodel.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tocodemodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tocodemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toCodeModel[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      23,   12,   12,   12, 0x08,
      34,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toCodeModel[] = {
    "toCodeModel\0\0cleanup()\0readData()\0"
    "queryError(toConnection::exception)\0"
};

const QMetaObject toCodeModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_toCodeModel,
      qt_meta_data_toCodeModel, 0 }
};

const QMetaObject *toCodeModel::metaObject() const
{
    return &staticMetaObject;
}

void *toCodeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toCodeModel))
	return static_cast<void*>(const_cast< toCodeModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int toCodeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: cleanup(); break;
        case 1: readData(); break;
        case 2: queryError((*reinterpret_cast< const toConnection::exception(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
