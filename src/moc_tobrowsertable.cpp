/****************************************************************************
** Meta object code from reading C++ file 'tobrowsertable.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tobrowsertable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tobrowsertable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toBrowserTable[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      29,   15,   15,   15, 0x0a,
      41,   15,   15,   15, 0x0a,
      56,   15,   15,   15, 0x0a,
      75,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toBrowserTable[] = {
    "toBrowserTable\0\0displaySQL()\0addColumn()\0"
    "removeColumn()\0toggleCustom(bool)\0"
    "uglyWorkaround()\0"
};

const QMetaObject toBrowserTable::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toBrowserTable,
      qt_meta_data_toBrowserTable, 0 }
};

const QMetaObject *toBrowserTable::metaObject() const
{
    return &staticMetaObject;
}

void *toBrowserTable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toBrowserTable))
	return static_cast<void*>(const_cast< toBrowserTable*>(this));
    if (!strcmp(_clname, "Ui::toBrowserTableUI"))
	return static_cast< Ui::toBrowserTableUI*>(const_cast< toBrowserTable*>(this));
    if (!strcmp(_clname, "toConnectionWidget"))
	return static_cast< toConnectionWidget*>(const_cast< toBrowserTable*>(this));
    return QDialog::qt_metacast(_clname);
}

int toBrowserTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displaySQL(); break;
        case 1: addColumn(); break;
        case 2: removeColumn(); break;
        case 3: toggleCustom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: uglyWorkaround(); break;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
