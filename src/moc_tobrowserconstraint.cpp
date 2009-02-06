/****************************************************************************
** Meta object code from reading C++ file 'tobrowserconstraint.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tobrowserconstraint.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tobrowserconstraint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toBrowserConstraint[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      34,   20,   20,   20, 0x0a,
      50,   20,   20,   20, 0x0a,
      66,   20,   20,   20, 0x0a,
      85,   20,   20,   20, 0x0a,
     106,  101,   20,   20, 0x0a,
     128,  122,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toBrowserConstraint[] = {
    "toBrowserConstraint\0\0displaySQL()\0"
    "addConstraint()\0delConstraint()\0"
    "changeConstraint()\0changeRefered()\0"
    "type\0changeType(int)\0table\0"
    "changeTable(QString)\0"
};

const QMetaObject toBrowserConstraint::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toBrowserConstraint,
      qt_meta_data_toBrowserConstraint, 0 }
};

const QMetaObject *toBrowserConstraint::metaObject() const
{
    return &staticMetaObject;
}

void *toBrowserConstraint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toBrowserConstraint))
	return static_cast<void*>(const_cast< toBrowserConstraint*>(this));
    if (!strcmp(_clname, "Ui::toBrowserConstraintUI"))
	return static_cast< Ui::toBrowserConstraintUI*>(const_cast< toBrowserConstraint*>(this));
    if (!strcmp(_clname, "toConnectionWidget"))
	return static_cast< toConnectionWidget*>(const_cast< toBrowserConstraint*>(this));
    return QDialog::qt_metacast(_clname);
}

int toBrowserConstraint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displaySQL(); break;
        case 1: addConstraint(); break;
        case 2: delConstraint(); break;
        case 3: changeConstraint(); break;
        case 4: changeRefered(); break;
        case 5: changeType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: changeTable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
