/****************************************************************************
** Meta object code from reading C++ file 'tosgastatement.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tosgastatement.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tosgastatement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toSGAStatement[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      39,   31,   15,   15, 0x0a,
      62,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toSGAStatement[] = {
    "toSGAStatement\0\0changeTab(int)\0address\0"
    "changeAddress(QString)\0refresh()\0"
};

const QMetaObject toSGAStatement::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_toSGAStatement,
      qt_meta_data_toSGAStatement, 0 }
};

const QMetaObject *toSGAStatement::metaObject() const
{
    return &staticMetaObject;
}

void *toSGAStatement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toSGAStatement))
	return static_cast<void*>(const_cast< toSGAStatement*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int toSGAStatement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: changeAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: refresh(); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
