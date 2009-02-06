/****************************************************************************
** Meta object code from reading C++ file 'toresultmodel.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultModel[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      32,   22,   14,   14, 0x05,
      93,   74,   14,   14, 0x05,
     152,  148,   14,   14, 0x05,
     181,  148,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     212,   14,   14,   14, 0x08,
     222,   14,   14,   14, 0x08,
     258,   14,   14,   14, 0x0a,
     268,   14,   14,   14, 0x0a,
     280,   14,   14,   14, 0x09,
     291,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_toResultModel[] = {
    "toResultModel\0\0done()\0res,error\0"
    "firstResult(toConnection::exception,bool)\0"
    "index,newValue,row\0"
    "columnChanged(QModelIndex,toQValue,toResultModel::Row)\0"
    "row\0rowAdded(toResultModel::Row)\0"
    "rowDeleted(toResultModel::Row)\0cleanup()\0"
    "queryError(toConnection::exception)\0"
    "readAll()\0fetchMore()\0readData()\0"
    "readHeaders()\0"
};

const QMetaObject toResultModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_toResultModel,
      qt_meta_data_toResultModel, 0 }
};

const QMetaObject *toResultModel::metaObject() const
{
    return &staticMetaObject;
}

void *toResultModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultModel))
	return static_cast<void*>(const_cast< toResultModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int toResultModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: done(); break;
        case 1: firstResult((*reinterpret_cast< const toConnection::exception(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: columnChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const toQValue(*)>(_a[2])),(*reinterpret_cast< const toResultModel::Row(*)>(_a[3]))); break;
        case 3: rowAdded((*reinterpret_cast< const toResultModel::Row(*)>(_a[1]))); break;
        case 4: rowDeleted((*reinterpret_cast< const toResultModel::Row(*)>(_a[1]))); break;
        case 5: cleanup(); break;
        case 6: queryError((*reinterpret_cast< const toConnection::exception(*)>(_a[1]))); break;
        case 7: readAll(); break;
        case 8: fetchMore(); break;
        case 9: readData(); break;
        case 10: readHeaders(); break;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void toResultModel::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void toResultModel::firstResult(const toConnection::exception & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void toResultModel::columnChanged(const QModelIndex & _t1, const toQValue & _t2, const toResultModel::Row & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void toResultModel::rowAdded(const toResultModel::Row & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void toResultModel::rowDeleted(const toResultModel::Row & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
