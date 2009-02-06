/****************************************************************************
** Meta object code from reading C++ file 'toresultcombo.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultcombo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultcombo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultCombo[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      22,   14,   14,   14, 0x0a,
      39,   32,   14,   14, 0x0a,
      75,   61,   14,   14, 0x0a,
     126,  105,   14,   14, 0x0a,
     164,   14,   14,   14, 0x08,
     171,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toResultCombo[] = {
    "toResultCombo\0\0done()\0refresh()\0Param1\0"
    "changeParams(QString)\0Param1,Param2\0"
    "changeParams(QString,QString)\0"
    "Param1,Param2,Param3\0"
    "changeParams(QString,QString,QString)\0"
    "poll()\0changeSelected()\0"
};

const QMetaObject toResultCombo::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_toResultCombo,
      qt_meta_data_toResultCombo, 0 }
};

const QMetaObject *toResultCombo::metaObject() const
{
    return &staticMetaObject;
}

void *toResultCombo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultCombo))
	return static_cast<void*>(const_cast< toResultCombo*>(this));
    if (!strcmp(_clname, "toResult"))
	return static_cast< toResult*>(const_cast< toResultCombo*>(this));
    return QComboBox::qt_metacast(_clname);
}

int toResultCombo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: done(); break;
        case 1: refresh(); break;
        case 2: changeParams((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: changeParams((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: changeParams((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: poll(); break;
        case 6: changeSelected(); break;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void toResultCombo::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
