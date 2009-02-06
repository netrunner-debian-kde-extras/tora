/****************************************************************************
** Meta object code from reading C++ file 'tonewconnection.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tonewconnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tonewconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toNewConnection[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   17,   16,   16, 0x0a,
      37,   29,   16,   16, 0x0a,
      74,   70,   16,   16, 0x0a,
      95,   16,   16,   16, 0x0a,
     111,   29,   16,   16, 0x0a,
     131,   16,   16,   16, 0x0a,
     144,   16,   16,   16, 0x0a,
     172,  167,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toNewConnection[] = {
    "toNewConnection\0\0r\0done(int)\0current\0"
    "previousCellChanged(QModelIndex)\0pos\0"
    "previousMenu(QPoint)\0historyDelete()\0"
    "changeProvider(int)\0changeHost()\0"
    "importButton_clicked()\0text\0"
    "searchEdit_textEdited(QString)\0"
};

const QMetaObject toNewConnection::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toNewConnection,
      qt_meta_data_toNewConnection, 0 }
};

const QMetaObject *toNewConnection::metaObject() const
{
    return &staticMetaObject;
}

void *toNewConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toNewConnection))
	return static_cast<void*>(const_cast< toNewConnection*>(this));
    if (!strcmp(_clname, "Ui::toNewConnectionUI"))
	return static_cast< Ui::toNewConnectionUI*>(const_cast< toNewConnection*>(this));
    if (!strcmp(_clname, "toHelpContext"))
	return static_cast< toHelpContext*>(const_cast< toNewConnection*>(this));
    return QDialog::qt_metacast(_clname);
}

int toNewConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: done((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: previousCellChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: previousMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: historyDelete(); break;
        case 4: changeProvider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: changeHost(); break;
        case 6: importButton_clicked(); break;
        case 7: searchEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
