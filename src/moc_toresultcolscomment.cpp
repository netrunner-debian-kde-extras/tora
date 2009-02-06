/****************************************************************************
** Meta object code from reading C++ file 'toresultcolscomment.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultcolscomment.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultcolscomment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultColsComment[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      37,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toResultColsComment[] = {
    "toResultColsComment\0\0saveUnchanged()\0"
    "commentChanged()\0"
};

const QMetaObject toResultColsComment::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_toResultColsComment,
      qt_meta_data_toResultColsComment, 0 }
};

const QMetaObject *toResultColsComment::metaObject() const
{
    return &staticMetaObject;
}

void *toResultColsComment::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultColsComment))
	return static_cast<void*>(const_cast< toResultColsComment*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int toResultColsComment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveUnchanged(); break;
        case 1: commentChanged(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
