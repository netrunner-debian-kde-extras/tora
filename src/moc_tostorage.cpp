/****************************************************************************
** Meta object code from reading C++ file 'tostorage.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tostorage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tostorage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toStorageTablespace[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      40,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   20,   20,   20, 0x0a,
      77,   20,   20,   20, 0x0a,
     100,   20,   20,   20, 0x0a,
     120,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toStorageTablespace[] = {
    "toStorageTablespace\0\0allowStorage(bool)\0"
    "tempFile(bool)\0permanentToggle(bool)\0"
    "dictionaryToggle(bool)\0uniformToggle(bool)\0"
    "allowDefault(bool)\0"
};

const QMetaObject toStorageTablespace::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toStorageTablespace,
      qt_meta_data_toStorageTablespace, 0 }
};

const QMetaObject *toStorageTablespace::metaObject() const
{
    return &staticMetaObject;
}

void *toStorageTablespace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toStorageTablespace))
	return static_cast<void*>(const_cast< toStorageTablespace*>(this));
    if (!strcmp(_clname, "Ui::toStorageTablespaceUI"))
	return static_cast< Ui::toStorageTablespaceUI*>(const_cast< toStorageTablespace*>(this));
    return QWidget::qt_metacast(_clname);
}

int toStorageTablespace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: allowStorage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: tempFile((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: permanentToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: dictionaryToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: uniformToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: allowDefault((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void toStorageTablespace::allowStorage(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void toStorageTablespace::tempFile(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_toDropTablespace[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_toDropTablespace[] = {
    "toDropTablespace\0\0validContent(bool)\0"
};

const QMetaObject toDropTablespace::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toDropTablespace,
      qt_meta_data_toDropTablespace, 0 }
};

const QMetaObject *toDropTablespace::metaObject() const
{
    return &staticMetaObject;
}

void *toDropTablespace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toDropTablespace))
	return static_cast<void*>(const_cast< toDropTablespace*>(this));
    if (!strcmp(_clname, "Ui::toDropTablespaceUI"))
	return static_cast< Ui::toDropTablespaceUI*>(const_cast< toDropTablespace*>(this));
    return QWidget::qt_metacast(_clname);
}

int toDropTablespace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: validContent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void toDropTablespace::validContent(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_toStorageDatafile[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   18,   18,   18, 0x0a,
      51,   18,   18,   18, 0x0a,
      73,   68,   18,   18, 0x0a,
      91,   18,   18,   18, 0x0a,
     109,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toStorageDatafile[] = {
    "toStorageDatafile\0\0validContent(bool)\0"
    "browseFile()\0autoExtend(bool)\0temp\0"
    "setTempFile(bool)\0maximumSize(bool)\0"
    "valueChanged(QString)\0"
};

const QMetaObject toStorageDatafile::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toStorageDatafile,
      qt_meta_data_toStorageDatafile, 0 }
};

const QMetaObject *toStorageDatafile::metaObject() const
{
    return &staticMetaObject;
}

void *toStorageDatafile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toStorageDatafile))
	return static_cast<void*>(const_cast< toStorageDatafile*>(this));
    if (!strcmp(_clname, "Ui::toStorageDatafileUI"))
	return static_cast< Ui::toStorageDatafileUI*>(const_cast< toStorageDatafile*>(this));
    return QWidget::qt_metacast(_clname);
}

int toStorageDatafile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: validContent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: browseFile(); break;
        case 2: autoExtend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: setTempFile((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: maximumSize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void toStorageDatafile::validContent(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_toStorageDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      21,   17,   16,   16, 0x0a,
      40,   17,   16,   16, 0x0a,
      59,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toStorageDialog[] = {
    "toStorageDialog\0\0val\0validContent(bool)\0"
    "allowStorage(bool)\0displaySQL()\0"
};

const QMetaObject toStorageDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toStorageDialog,
      qt_meta_data_toStorageDialog, 0 }
};

const QMetaObject *toStorageDialog::metaObject() const
{
    return &staticMetaObject;
}

void *toStorageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toStorageDialog))
	return static_cast<void*>(const_cast< toStorageDialog*>(this));
    if (!strcmp(_clname, "Ui::toStorageDialogUI"))
	return static_cast< Ui::toStorageDialogUI*>(const_cast< toStorageDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int toStorageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: validContent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: allowStorage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: displaySQL(); break;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_toStorageObjectModel[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_toStorageObjectModel[] = {
    "toStorageObjectModel\0"
};

const QMetaObject toStorageObjectModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_toStorageObjectModel,
      qt_meta_data_toStorageObjectModel, 0 }
};

const QMetaObject *toStorageObjectModel::metaObject() const
{
    return &staticMetaObject;
}

void *toStorageObjectModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toStorageObjectModel))
	return static_cast<void*>(const_cast< toStorageObjectModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int toStorageObjectModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_toStorage[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      21,   10,   10,   10, 0x0a,
      32,   10,   10,   10, 0x0a,
      41,   10,   10,   10, 0x0a,
      51,   10,   10,   10, 0x0a,
      61,   10,   10,   10, 0x0a,
      73,   10,   10,   10, 0x0a,
      85,   10,   10,   10, 0x0a,
      96,   10,   10,   10, 0x0a,
     110,   10,   10,   10, 0x0a,
     126,   10,   10,   10, 0x0a,
     145,   10,   10,   10, 0x0a,
     162,   10,   10,   10, 0x0a,
     173,   10,   10,   10, 0x0a,
     190,   10,   10,   10, 0x0a,
     207,   10,   10,   10, 0x0a,
     229,   10,   10,   10, 0x0a,
     257,  248,   10,   10, 0x0a,
     302,  295,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toStorage[] = {
    "toStorage\0\0refresh()\0coalesce()\0"
    "online()\0offline()\0logging()\0noLogging()\0"
    "readWrite()\0readOnly()\0newDatafile()\0"
    "newTablespace()\0modifyTablespace()\0"
    "modifyDatafile()\0moveFile()\0"
    "dropTablespace()\0showExtent(bool)\0"
    "showTablespaces(bool)\0selectionChanged()\0"
    "current,\0selectObject(QModelIndex,QModelIndex)\0"
    "widget\0windowActivated(QMdiSubWindow*)\0"
};

const QMetaObject toStorage::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toStorage,
      qt_meta_data_toStorage, 0 }
};

const QMetaObject *toStorage::metaObject() const
{
    return &staticMetaObject;
}

void *toStorage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toStorage))
	return static_cast<void*>(const_cast< toStorage*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toStorage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: coalesce(); break;
        case 2: online(); break;
        case 3: offline(); break;
        case 4: logging(); break;
        case 5: noLogging(); break;
        case 6: readWrite(); break;
        case 7: readOnly(); break;
        case 8: newDatafile(); break;
        case 9: newTablespace(); break;
        case 10: modifyTablespace(); break;
        case 11: modifyDatafile(); break;
        case 12: moveFile(); break;
        case 13: dropTablespace(); break;
        case 14: showExtent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: showTablespaces((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: selectionChanged(); break;
        case 17: selectObject((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 18: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        }
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
