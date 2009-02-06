/****************************************************************************
** Meta object code from reading C++ file 'tomain.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tomain.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tomain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toMain[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      12,    8,    7,    7, 0x05,
      37,   31,    7,    7, 0x05,
      62,   31,    7,    7, 0x05,
      87,   31,    7,    7, 0x05,
     114,    8,    7,    7, 0x05,
     139,    8,    7,    7, 0x05,
     171,  166,    7,    7, 0x05,
     202,  166,    7,    7, 0x05,
     244,  235,    7,    7, 0x05,
     278,  275,    7,    7, 0x05,
     309,  296,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     350,    7,  345,    7, 0x0a,
     358,    7,    7,    7, 0x0a,
     378,    7,    7,    7, 0x0a,
     410,    7,    7,    7, 0x0a,
     425,    7,    7,    7, 0x0a,
     440,    7,    7,    7, 0x0a,
     454,    7,    7,    7, 0x0a,
     468,    7,    7,    7, 0x0a,
     483,    7,    7,    7, 0x0a,
     502,  296,    7,    7, 0x0a,
     533,    7,    7,    7, 0x0a,
     544,    7,    7,    7, 0x0a,
     557,    7,    7,    7, 0x08,
     573,    7,  345,    7, 0x08,
     589,    7,    7,    7, 0x08,
     615,    7,    7,    7, 0x08,
     647,  640,    7,    7, 0x08,
     672,  640,    7,    7, 0x08,
     697,    7,    7,    7, 0x08,
     716,    7,    7,    7, 0x08,
     733,  296,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toMain[] = {
    "toMain\0\0str\0sqlEditor(QString)\0chart\0"
    "chartAdded(toLineChart*)\0"
    "chartSetup(toLineChart*)\0"
    "chartRemoved(toLineChart*)\0"
    "addedConnection(QString)\0"
    "removedConnection(QString)\0tool\0"
    "addedToolWidget(toToolWidget*)\0"
    "removedToolWidget(toToolWidget*)\0"
    "conn,cmt\0willCommit(toConnection&,bool)\0"
    "en\0editEnabled(bool)\0str,save,log\0"
    "messageRequested(QString,bool,bool)\0"
    "bool\0close()\0updateWindowsMenu()\0"
    "windowActivated(QMdiSubWindow*)\0"
    "showFileMenu()\0checkCaching()\0"
    "saveSession()\0loadSession()\0closeSession()\0"
    "changeConnection()\0showMessage(QString,bool,bool)\0"
    "showBusy()\0removeBusy()\0addConnection()\0"
    "delConnection()\0commandCallback(QAction*)\0"
    "recentCallback(QAction*)\0action\0"
    "statusCallback(QAction*)\0"
    "windowCallback(QAction*)\0updateStatusMenu()\0"
    "displayMessage()\0showMessageImpl(QString,bool,bool)\0"
};

const QMetaObject toMain::staticMetaObject = {
    { &toMainWindow::staticMetaObject, qt_meta_stringdata_toMain,
      qt_meta_data_toMain, 0 }
};

const QMetaObject *toMain::metaObject() const
{
    return &staticMetaObject;
}

void *toMain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toMain))
	return static_cast<void*>(const_cast< toMain*>(this));
    return toMainWindow::qt_metacast(_clname);
}

int toMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sqlEditor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: chartAdded((*reinterpret_cast< toLineChart*(*)>(_a[1]))); break;
        case 2: chartSetup((*reinterpret_cast< toLineChart*(*)>(_a[1]))); break;
        case 3: chartRemoved((*reinterpret_cast< toLineChart*(*)>(_a[1]))); break;
        case 4: addedConnection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: removedConnection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: addedToolWidget((*reinterpret_cast< toToolWidget*(*)>(_a[1]))); break;
        case 7: removedToolWidget((*reinterpret_cast< toToolWidget*(*)>(_a[1]))); break;
        case 8: willCommit((*reinterpret_cast< toConnection(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: editEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: messageRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 11: { bool _r = close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: updateWindowsMenu(); break;
        case 13: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 14: showFileMenu(); break;
        case 15: checkCaching(); break;
        case 16: saveSession(); break;
        case 17: loadSession(); break;
        case 18: closeSession(); break;
        case 19: changeConnection(); break;
        case 20: showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 21: showBusy(); break;
        case 22: removeBusy(); break;
        case 23: addConnection(); break;
        case 24: { bool _r = delConnection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: commandCallback((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 26: recentCallback((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 27: statusCallback((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 28: windowCallback((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 29: updateStatusMenu(); break;
        case 30: displayMessage(); break;
        case 31: showMessageImpl((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        }
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void toMain::sqlEditor(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void toMain::chartAdded(toLineChart * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void toMain::chartSetup(toLineChart * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void toMain::chartRemoved(toLineChart * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void toMain::addedConnection(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void toMain::removedConnection(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void toMain::addedToolWidget(toToolWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void toMain::removedToolWidget(toToolWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void toMain::willCommit(toConnection & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void toMain::editEnabled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void toMain::messageRequested(const QString & _t1, bool _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
