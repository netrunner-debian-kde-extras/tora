/****************************************************************************
** Meta object code from reading C++ file 'tosession.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tosession.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tosession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toSession[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      31,   26,   10,   10, 0x0a,
      61,   26,   10,   10, 0x0a,
      97,   93,   10,   10, 0x0a,
     120,   10,   10,   10, 0x0a,
     130,   10,   10,   10, 0x0a,
     144,   10,   10,   10, 0x0a,
     163,   10,   10,   10, 0x0a,
     183,   10,   10,   10, 0x0a,
     199,   10,   10,   10, 0x0a,
     226,  219,   10,   10, 0x0a,
     258,   10,   10,   10, 0x0a,
     265,   10,   10,   10, 0x0a,
     288,   10,   10,   10, 0x0a,
     300,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toSession[] = {
    "toSession\0\0changeTab(int)\0item\0"
    "changeItem(toTreeWidgetItem*)\0"
    "changeCursor(toTreeWidgetItem*)\0str\0"
    "changeRefresh(QString)\0refresh()\0"
    "refreshTabs()\0enableStatistics()\0"
    "disableStatistics()\0cancelBackend()\0"
    "disconnectSession()\0widget\0"
    "windowActivated(QMdiSubWindow*)\0done()\0"
    "excludeSelection(bool)\0selectAll()\0"
    "selectNone()\0"
};

const QMetaObject toSession::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toSession,
      qt_meta_data_toSession, 0 }
};

const QMetaObject *toSession::metaObject() const
{
    return &staticMetaObject;
}

void *toSession::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toSession))
	return static_cast<void*>(const_cast< toSession*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: changeItem((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: changeCursor((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: changeRefresh((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: refresh(); break;
        case 5: refreshTabs(); break;
        case 6: enableStatistics(); break;
        case 7: disableStatistics(); break;
        case 8: cancelBackend(); break;
        case 9: disconnectSession(); break;
        case 10: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 11: done(); break;
        case 12: excludeSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: selectAll(); break;
        case 14: selectNone(); break;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
