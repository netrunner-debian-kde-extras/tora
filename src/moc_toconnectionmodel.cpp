/****************************************************************************
** Meta object code from reading C++ file 'toconnectionmodel.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toconnectionmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toconnectionmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toConnectionModel[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_toConnectionModel[] = {
    "toConnectionModel\0"
};

const QMetaObject toConnectionModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_toConnectionModel,
      qt_meta_data_toConnectionModel, 0 }
};

const QMetaObject *toConnectionModel::metaObject() const
{
    return &staticMetaObject;
}

void *toConnectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toConnectionModel))
	return static_cast<void*>(const_cast< toConnectionModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int toConnectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
