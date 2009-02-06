/****************************************************************************
** Meta object code from reading C++ file 'toplsqltext.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toplsqltext.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toplsqltext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toPLSQLText[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      25,   13,   12,   12, 0x05,
      78,   71,   12,   12, 0x05,
     119,   12,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_toPLSQLText[] = {
    "toPLSQLText\0\0type,values\0"
    "errorsChanged(QString,QMultiMap<int,QString>)\0"
    "values\0warningsChanged(const QMap<int,QString>)\0"
    "contentChanged()\0"
};

const QMetaObject toPLSQLText::staticMetaObject = {
    { &toHighlightedText::staticMetaObject, qt_meta_stringdata_toPLSQLText,
      qt_meta_data_toPLSQLText, 0 }
};

const QMetaObject *toPLSQLText::metaObject() const
{
    return &staticMetaObject;
}

void *toPLSQLText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toPLSQLText))
	return static_cast<void*>(const_cast< toPLSQLText*>(this));
    return toHighlightedText::qt_metacast(_clname);
}

int toPLSQLText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toHighlightedText::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: errorsChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QMultiMap<int,QString>(*)>(_a[2]))); break;
        case 1: warningsChanged((*reinterpret_cast< const QMap<int,QString>(*)>(_a[1]))); break;
        case 2: contentChanged(); break;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void toPLSQLText::errorsChanged(const QString & _t1, const QMultiMap<int,QString> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void toPLSQLText::warningsChanged(const QMap<int,QString> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void toPLSQLText::contentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_toPLSQLWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   15,   14,   14, 0x08,
      62,   15,   14,   14, 0x08,
     106,   14,   14,   14, 0x08,
     122,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toPLSQLWidget[] = {
    "toPLSQLWidget\0\0,\0"
    "goToError(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "applyResult(QString,QMultiMap<int,QString>)\0"
    "updateContent()\0changeContent(toTreeWidgetItem*)\0"
};

const QMetaObject toPLSQLWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toPLSQLWidget,
      qt_meta_data_toPLSQLWidget, 0 }
};

const QMetaObject *toPLSQLWidget::metaObject() const
{
    return &staticMetaObject;
}

void *toPLSQLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toPLSQLWidget))
	return static_cast<void*>(const_cast< toPLSQLWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int toPLSQLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: goToError((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 1: applyResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QMultiMap<int,QString>(*)>(_a[2]))); break;
        case 2: updateContent(); break;
        case 3: changeContent((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
