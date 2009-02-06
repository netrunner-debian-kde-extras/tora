/****************************************************************************
** Meta object code from reading C++ file 'toresultcols.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultcols.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultcols.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultCols[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   14,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toResultCols[] = {
    "toResultCols\0\0val\0editComment(bool)\0"
};

const QMetaObject toResultCols::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toResultCols,
      qt_meta_data_toResultCols, 0 }
};

const QMetaObject *toResultCols::metaObject() const
{
    return &staticMetaObject;
}

void *toResultCols::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultCols))
	return static_cast<void*>(const_cast< toResultCols*>(this));
    if (!strcmp(_clname, "toResult"))
	return static_cast< toResult*>(const_cast< toResultCols*>(this));
    return QWidget::qt_metacast(_clname);
}

int toResultCols::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: editComment((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
