/****************************************************************************
** Meta object code from reading C++ file 'toresultstorage.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultstorage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultstorage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toStorageExtent[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_toStorageExtent[] = {
    "toStorageExtent\0"
};

const QMetaObject toStorageExtent::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toStorageExtent,
      qt_meta_data_toStorageExtent, 0 }
};

const QMetaObject *toStorageExtent::metaObject() const
{
    return &staticMetaObject;
}

void *toStorageExtent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toStorageExtent))
	return static_cast<void*>(const_cast< toStorageExtent*>(this));
    return QWidget::qt_metacast(_clname);
}

int toStorageExtent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_toResultExtent[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      27,   16,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toResultExtent[] = {
    "toResultExtent\0\0sql,params\0"
    "query(QString,toQList)\0"
};

const QMetaObject toResultExtent::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_toResultExtent,
      qt_meta_data_toResultExtent, 0 }
};

const QMetaObject *toResultExtent::metaObject() const
{
    return &staticMetaObject;
}

void *toResultExtent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultExtent))
	return static_cast<void*>(const_cast< toResultExtent*>(this));
    if (!strcmp(_clname, "toResult"))
	return static_cast< toResult*>(const_cast< toResultExtent*>(this));
    return QSplitter::qt_metacast(_clname);
}

int toResultExtent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: query((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const toQList(*)>(_a[2]))); break;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_toResultStorage[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      25,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toResultStorage[] = {
    "toResultStorage\0\0query()\0poll()\0"
};

const QMetaObject toResultStorage::staticMetaObject = {
    { &toResultView::staticMetaObject, qt_meta_stringdata_toResultStorage,
      qt_meta_data_toResultStorage, 0 }
};

const QMetaObject *toResultStorage::metaObject() const
{
    return &staticMetaObject;
}

void *toResultStorage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultStorage))
	return static_cast<void*>(const_cast< toResultStorage*>(this));
    return toResultView::qt_metacast(_clname);
}

int toResultStorage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toResultView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: query(); break;
        case 1: poll(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
