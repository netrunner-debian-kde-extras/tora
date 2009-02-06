/****************************************************************************
** Meta object code from reading C++ file 'tobrowserindex.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tobrowserindex.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tobrowserindex.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toBrowserIndex[] = {

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
      40,   15,   15,   15, 0x0a,
      51,   15,   15,   15, 0x0a,
      71,   65,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toBrowserIndex[] = {
    "toBrowserIndex\0\0displaySQL()\0addIndex()\0"
    "delIndex()\0changeIndex()\0table\0"
    "changeTable(QString)\0"
};

const QMetaObject toBrowserIndex::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toBrowserIndex,
      qt_meta_data_toBrowserIndex, 0 }
};

const QMetaObject *toBrowserIndex::metaObject() const
{
    return &staticMetaObject;
}

void *toBrowserIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toBrowserIndex))
	return static_cast<void*>(const_cast< toBrowserIndex*>(this));
    if (!strcmp(_clname, "Ui::toBrowserIndexUI"))
	return static_cast< Ui::toBrowserIndexUI*>(const_cast< toBrowserIndex*>(this));
    if (!strcmp(_clname, "toConnectionWidget"))
	return static_cast< toConnectionWidget*>(const_cast< toBrowserIndex*>(this));
    return QDialog::qt_metacast(_clname);
}

int toBrowserIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displaySQL(); break;
        case 1: addIndex(); break;
        case 2: delIndex(); break;
        case 3: changeIndex(); break;
        case 4: changeTable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
