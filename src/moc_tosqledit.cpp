/****************************************************************************
** Meta object code from reading C++ file 'tosqledit.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tosqledit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tosqledit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toSQLEdit[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      21,   10,   10,   10, 0x0a,
      31,   10,   10,   10, 0x0a,
      47,   10,   10,   10, 0x0a,
      66,   10,   10,   10, 0x0a,
      89,   10,   10,   10, 0x0a,
     105,   10,   10,   10, 0x0a,
     122,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toSQLEdit[] = {
    "toSQLEdit\0\0loadSQL()\0saveSQL()\0"
    "deleteVersion()\0selectionChanged()\0"
    "changeVersion(QString)\0commitChanges()\0"
    "editSQL(QString)\0newSQL()\0"
};

const QMetaObject toSQLEdit::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toSQLEdit,
      qt_meta_data_toSQLEdit, 0 }
};

const QMetaObject *toSQLEdit::metaObject() const
{
    return &staticMetaObject;
}

void *toSQLEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toSQLEdit))
	return static_cast<void*>(const_cast< toSQLEdit*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toSQLEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: loadSQL(); break;
        case 1: saveSQL(); break;
        case 2: deleteVersion(); break;
        case 3: selectionChanged(); break;
        case 4: changeVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: commitChanges(); break;
        case 6: editSQL((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: newSQL(); break;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
