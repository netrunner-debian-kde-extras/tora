/****************************************************************************
** Meta object code from reading C++ file 'totreewidget.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "totreewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'totreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toTreeWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      33,   13,   13,   13, 0x05,
      69,   13,   13,   13, 0x05,
     107,  102,   13,   13, 0x05,
     134,   13,   13,   13, 0x05,
     162,   13,   13,   13, 0x05,
     191,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     224,   13,   13,   13, 0x0a,
     240,   13,   13,   13, 0x0a,
     257,   13,   13,   13, 0x0a,
     293,  281,   13,   13, 0x0a,
     333,  281,   13,   13, 0x0a,
     367,  102,   13,   13, 0x0a,
     400,  281,   13,   13, 0x0a,
     438,  102,   13,   13, 0x0a,
     472,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toTreeWidget[] = {
    "toTreeWidget\0\0selectionChanged()\0"
    "selectionChanged(toTreeWidgetItem*)\0"
    "doubleClicked(toTreeWidgetItem*)\0item\0"
    "clicked(toTreeWidgetItem*)\0"
    "expanded(toTreeWidgetItem*)\0"
    "collapsed(toTreeWidgetItem*)\0"
    "returnPressed(toTreeWidgetItem*)\0"
    "selectAll(bool)\0updateContents()\0"
    "handleSelectionChange()\0item,column\0"
    "handleDoubleClick(QTreeWidgetItem*,int)\0"
    "handleClick(QTreeWidgetItem*,int)\0"
    "handleExpanded(QTreeWidgetItem*)\0"
    "handleActivated(QTreeWidgetItem*,int)\0"
    "handleCollapsed(QTreeWidgetItem*)\0"
    "clear()\0"
};

const QMetaObject toTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_toTreeWidget,
      qt_meta_data_toTreeWidget, 0 }
};

const QMetaObject *toTreeWidget::metaObject() const
{
    return &staticMetaObject;
}

void *toTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTreeWidget))
	return static_cast<void*>(const_cast< toTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int toTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectionChanged(); break;
        case 1: selectionChanged((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: doubleClicked((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: clicked((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: expanded((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 5: collapsed((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: returnPressed((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 7: selectAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: updateContents(); break;
        case 9: handleSelectionChange(); break;
        case 10: handleDoubleClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: handleClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: handleExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 13: handleActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: handleCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 15: clear(); break;
        }
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void toTreeWidget::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void toTreeWidget::selectionChanged(toTreeWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void toTreeWidget::doubleClicked(toTreeWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void toTreeWidget::clicked(toTreeWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void toTreeWidget::expanded(toTreeWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void toTreeWidget::collapsed(toTreeWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void toTreeWidget::returnPressed(toTreeWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
