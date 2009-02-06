/****************************************************************************
** Meta object code from reading C++ file 'toresulttableviewedit.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresulttableviewedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresulttableviewedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultTableViewEdit[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      28,   23,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   42,   22,   22, 0x0a,
      99,   22,   22,   22, 0x0a,
     129,   22,   22,   22, 0x0a,
     162,   22,   22,   22, 0x0a,
     174,   22,   22,   22, 0x0a,
     192,   22,   22,   22, 0x0a,
     219,  212,  207,   22, 0x0a,
     239,   22,  207,   22, 0x2a,
     264,  255,   22,   22, 0x0a,
     298,   22,   22,   22, 0x0a,
     331,  314,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toResultTableViewEdit[] = {
    "toResultTableViewEdit\0\0edit\0changed(bool)\0"
    ",,\0recordChange(QModelIndex,toQValue,toResultModel::Row)\0"
    "recordAdd(toResultModel::Row)\0"
    "recordDelete(toResultModel::Row)\0"
    "addRecord()\0duplicateRecord()\0"
    "deleteRecord()\0bool\0status\0"
    "commitChanges(bool)\0commitChanges()\0"
    "conn,cmt\0commitChanges(toConnection&,bool)\0"
    "revertChanges()\0parent,start,end\0"
    "handleNewRows(QModelIndex,int,int)\0"
};

const QMetaObject toResultTableViewEdit::staticMetaObject = {
    { &toResultTableView::staticMetaObject, qt_meta_stringdata_toResultTableViewEdit,
      qt_meta_data_toResultTableViewEdit, 0 }
};

const QMetaObject *toResultTableViewEdit::metaObject() const
{
    return &staticMetaObject;
}

void *toResultTableViewEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultTableViewEdit))
	return static_cast<void*>(const_cast< toResultTableViewEdit*>(this));
    return toResultTableView::qt_metacast(_clname);
}

int toResultTableViewEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toResultTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: recordChange((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const toQValue(*)>(_a[2])),(*reinterpret_cast< const toResultModel::Row(*)>(_a[3]))); break;
        case 2: recordAdd((*reinterpret_cast< const toResultModel::Row(*)>(_a[1]))); break;
        case 3: recordDelete((*reinterpret_cast< const toResultModel::Row(*)>(_a[1]))); break;
        case 4: addRecord(); break;
        case 5: duplicateRecord(); break;
        case 6: deleteRecord(); break;
        case 7: { bool _r = commitChanges((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = commitChanges();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: commitChanges((*reinterpret_cast< toConnection(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: revertChanges(); break;
        case 11: handleNewRows((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void toResultTableViewEdit::changed(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
