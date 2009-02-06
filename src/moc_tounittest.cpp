/****************************************************************************
** Meta object code from reading C++ file 'tounittest.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tounittest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tounittest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toUnitTest[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      43,   11,   11,   11, 0x08,
      71,   11,   11,   11, 0x08,
      89,   11,   11,   11, 0x08,
     111,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toUnitTest[] = {
    "toUnitTest\0\0packageList_selectionChanged()\0"
    "codeList_selectionChanged()\0"
    "refreshCodeList()\0changeSchema(QString)\0"
    "handleDone()\0"
};

const QMetaObject toUnitTest::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toUnitTest,
      qt_meta_data_toUnitTest, 0 }
};

const QMetaObject *toUnitTest::metaObject() const
{
    return &staticMetaObject;
}

void *toUnitTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toUnitTest))
	return static_cast<void*>(const_cast< toUnitTest*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toUnitTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: packageList_selectionChanged(); break;
        case 1: codeList_selectionChanged(); break;
        case 2: refreshCodeList(); break;
        case 3: changeSchema((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: handleDone(); break;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
