/****************************************************************************
** Meta object code from reading C++ file 'toresultdata.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultdata.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultData[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   13,   13,   13, 0x09,
      48,   13,   13,   13, 0x09,
      67,   13,   13,   13, 0x09,
      94,   86,   13,   13, 0x0a,
     117,   13,   13,   13, 0x0a,
     130,   13,   13,   13, 0x0a,
     137,   13,   13,   13, 0x0a,
     149,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toResultData[] = {
    "toResultData\0\0changesSaved()\0"
    "navigate(QAction*)\0changeFilter(bool)\0"
    "removeFilter(bool)\0display\0"
    "singleRecordForm(bool)\0updateForm()\0"
    "save()\0addRecord()\0refreshWarn()\0"
};

const QMetaObject toResultData::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toResultData,
      qt_meta_data_toResultData, 0 }
};

const QMetaObject *toResultData::metaObject() const
{
    return &staticMetaObject;
}

void *toResultData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultData))
	return static_cast<void*>(const_cast< toResultData*>(this));
    if (!strcmp(_clname, "toResult"))
	return static_cast< toResult*>(const_cast< toResultData*>(this));
    return QWidget::qt_metacast(_clname);
}

int toResultData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changesSaved(); break;
        case 1: navigate((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: changeFilter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: removeFilter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: singleRecordForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: updateForm(); break;
        case 6: save(); break;
        case 7: addRecord(); break;
        case 8: refreshWarn(); break;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void toResultData::changesSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
