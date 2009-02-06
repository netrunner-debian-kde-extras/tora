/****************************************************************************
** Meta object code from reading C++ file 'toresultview.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toListView[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   37,   11,   11, 0x0a,
      65,   11,   11,   11, 0x0a,
      85,   11,   11,   11, 0x0a,
      99,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_toListView[] = {
    "toListView\0\0menu\0displayMenu(QMenu*)\0"
    "item\0setDisplayMenu(QMenu*)\0"
    "displayMenu(QPoint)\0displayMemo()\0"
    "menuCallback(QAction*)\0"
};

const QMetaObject toListView::staticMetaObject = {
    { &toTreeWidget::staticMetaObject, qt_meta_stringdata_toListView,
      qt_meta_data_toListView, 0 }
};

const QMetaObject *toListView::metaObject() const
{
    return &staticMetaObject;
}

void *toListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toListView))
	return static_cast<void*>(const_cast< toListView*>(this));
    if (!strcmp(_clname, "toEditWidget"))
	return static_cast< toEditWidget*>(const_cast< toListView*>(this));
    return toTreeWidget::qt_metacast(_clname);
}

int toListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displayMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 1: setDisplayMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 2: displayMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: displayMemo(); break;
        case 4: menuCallback((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void toListView::displayMenu(QMenu * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_toResultView[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      31,   24,   13,   13, 0x0a,
      67,   53,   13,   13, 0x0a,
     118,   97,   13,   13, 0x0a,
     156,   13,   13,   13, 0x0a,
     171,   13,  166,   13, 0x0a,
     200,  196,   13,   13, 0x08,
     220,   13,   13,   13, 0x08,
     235,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_toResultView[] = {
    "toResultView\0\0refresh()\0Param1\0"
    "changeParams(QString)\0Param1,Param2\0"
    "changeParams(QString,QString)\0"
    "Param1,Param2,Param3\0"
    "changeParams(QString,QString,QString)\0"
    "addItem()\0bool\0canHandle(toConnection&)\0"
    "col\0headingClicked(int)\0checkHeading()\0"
    "menuCallback(QAction*)\0"
};

const QMetaObject toResultView::staticMetaObject = {
    { &toListView::staticMetaObject, qt_meta_stringdata_toResultView,
      qt_meta_data_toResultView, 0 }
};

const QMetaObject *toResultView::metaObject() const
{
    return &staticMetaObject;
}

void *toResultView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultView))
	return static_cast<void*>(const_cast< toResultView*>(this));
    if (!strcmp(_clname, "toResult"))
	return static_cast< toResult*>(const_cast< toResultView*>(this));
    return toListView::qt_metacast(_clname);
}

int toResultView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: changeParams((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: changeParams((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: changeParams((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: addItem(); break;
        case 5: { bool _r = canHandle((*reinterpret_cast< toConnection(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: headingClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: checkHeading(); break;
        case 8: menuCallback((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
