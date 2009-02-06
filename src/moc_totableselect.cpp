/****************************************************************************
** Meta object code from reading C++ file 'totableselect.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "totableselect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'totableselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toTableSelect[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   14,   14,   14, 0x08,
      50,   14,   14,   14, 0x08,
      65,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toTableSelect[] = {
    "toTableSelect\0\0table\0selectTable(QString)\0"
    "setup()\0changeSchema()\0changeTable()\0"
};

const QMetaObject toTableSelect::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_toTableSelect,
      qt_meta_data_toTableSelect, 0 }
};

const QMetaObject *toTableSelect::metaObject() const
{
    return &staticMetaObject;
}

void *toTableSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTableSelect))
	return static_cast<void*>(const_cast< toTableSelect*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int toTableSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectTable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: setup(); break;
        case 2: changeSchema(); break;
        case 3: changeTable(); break;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void toTableSelect::selectTable(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
