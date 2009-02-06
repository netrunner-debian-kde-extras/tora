/****************************************************************************
** Meta object code from reading C++ file 'toresulttableview.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresulttableview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresulttableview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultTableView[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      24,   19,   18,   18, 0x05,
      44,   18,   18,   18, 0x05,
      77,   63,   18,   18, 0x05,
     127,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     138,  134,   18,   18, 0x09,
     165,  158,   18,   18, 0x09,
     188,   18,   18,   18, 0x09,
     201,   18,   18,   18, 0x09,
     225,  215,   18,   18, 0x09,
     267,   18,   18,   18, 0x09,
     318,  298,   18,   18, 0x09,
     366,   18,   18,   18, 0x09,
     385,   18,   18,   18, 0x0a,
     414,  411,   18,   18, 0x0a,
     444,   18,   18,   18, 0x0a,
     454,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toResultTableView[] = {
    "toResultTableView\0\0menu\0displayMenu(QMenu*)\0"
    "selectionChanged()\0sql,res,error\0"
    "firstResult(QString,toConnection::exception,bool)\0"
    "done()\0pos\0displayMenu(QPoint)\0action\0"
    "menuCallback(QAction*)\0handleDone()\0"
    "handleReset()\0res,error\0"
    "handleFirst(toConnection::exception,bool)\0"
    "handleDoubleClick(QModelIndex)\0"
    "selected,deselected\0"
    "selectionChanged(QItemSelection,QItemSelection)\0"
    "applyColumnRules()\0resizeColumnsToContents()\0"
    ",,\0columnWasResized(int,int,int)\0"
    "refresh()\0stop()\0"
};

const QMetaObject toResultTableView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_toResultTableView,
      qt_meta_data_toResultTableView, 0 }
};

const QMetaObject *toResultTableView::metaObject() const
{
    return &staticMetaObject;
}

void *toResultTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultTableView))
	return static_cast<void*>(const_cast< toResultTableView*>(this));
    if (!strcmp(_clname, "toResult"))
	return static_cast< toResult*>(const_cast< toResultTableView*>(this));
    if (!strcmp(_clname, "toEditWidget"))
	return static_cast< toEditWidget*>(const_cast< toResultTableView*>(this));
    return QTableView::qt_metacast(_clname);
}

int toResultTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displayMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 1: selectionChanged(); break;
        case 2: firstResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const toConnection::exception(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: done(); break;
        case 4: displayMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: menuCallback((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: handleDone(); break;
        case 7: handleReset(); break;
        case 8: handleFirst((*reinterpret_cast< const toConnection::exception(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: handleDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 11: applyColumnRules(); break;
        case 12: resizeColumnsToContents(); break;
        case 13: columnWasResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: refresh(); break;
        case 15: stop(); break;
        }
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void toResultTableView::displayMenu(QMenu * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void toResultTableView::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void toResultTableView::firstResult(const QString & _t1, const toConnection::exception & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void toResultTableView::done()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
