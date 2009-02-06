/********************************************************************************
** Form generated from reading ui file 'tostorageprefsui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOSTORAGEPREFSUI_H
#define UI_TOSTORAGEPREFSUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toStoragePrefsUI
{
public:
    QGridLayout *gridLayout;
    QGroupBox *ButtonGroup1;
    QGridLayout *gridLayout1;
    QCheckBox *DispCoalesced;
    QCheckBox *DispExtents;
    QCheckBox *DispTablespaces;
    QSpacerItem *spacerItem;
    QCheckBox *DispAvailableGraph;

    void setupUi(QWidget *toStoragePrefsUI)
    {
    if (toStoragePrefsUI->objectName().isEmpty())
        toStoragePrefsUI->setObjectName(QString::fromUtf8("toStoragePrefsUI"));
    toStoragePrefsUI->resize(588, 480);
    gridLayout = new QGridLayout(toStoragePrefsUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    ButtonGroup1 = new QGroupBox(toStoragePrefsUI);
    ButtonGroup1->setObjectName(QString::fromUtf8("ButtonGroup1"));
    gridLayout1 = new QGridLayout(ButtonGroup1);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    DispCoalesced = new QCheckBox(ButtonGroup1);
    DispCoalesced->setObjectName(QString::fromUtf8("DispCoalesced"));

    gridLayout1->addWidget(DispCoalesced, 0, 0, 1, 1);

    DispExtents = new QCheckBox(ButtonGroup1);
    DispExtents->setObjectName(QString::fromUtf8("DispExtents"));

    gridLayout1->addWidget(DispExtents, 1, 0, 1, 1);

    DispTablespaces = new QCheckBox(ButtonGroup1);
    DispTablespaces->setObjectName(QString::fromUtf8("DispTablespaces"));

    gridLayout1->addWidget(DispTablespaces, 2, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem, 4, 0, 1, 1);

    DispAvailableGraph = new QCheckBox(ButtonGroup1);
    DispAvailableGraph->setObjectName(QString::fromUtf8("DispAvailableGraph"));

    gridLayout1->addWidget(DispAvailableGraph, 3, 0, 1, 1);


    gridLayout->addWidget(ButtonGroup1, 0, 0, 1, 1);


    retranslateUi(toStoragePrefsUI);

    QMetaObject::connectSlotsByName(toStoragePrefsUI);
    } // setupUi

    void retranslateUi(QWidget *toStoragePrefsUI)
    {
    toStoragePrefsUI->setWindowTitle(QApplication::translate("toStoragePrefsUI", "Form1", 0, QApplication::UnicodeUTF8));
    ButtonGroup1->setTitle(QApplication::translate("toStoragePrefsUI", "Storage Manager", 0, QApplication::UnicodeUTF8));
    DispCoalesced->setText(QApplication::translate("toStoragePrefsUI", "&Display coalesced column", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    DispExtents->setToolTip(QApplication::translate("toStoragePrefsUI", "Display object and extent list on startup.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    DispExtents->setText(QApplication::translate("toStoragePrefsUI", "Display object &extents", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    DispTablespaces->setToolTip(QApplication::translate("toStoragePrefsUI", "Display tablespaces or just datafiles.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    DispTablespaces->setText(QApplication::translate("toStoragePrefsUI", "Display tablespaces or just datafiles.", 0, QApplication::UnicodeUTF8));
    DispAvailableGraph->setText(QApplication::translate("toStoragePrefsUI", "Display graph of autoextend information instead of just free space.", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toStoragePrefsUI);
    } // retranslateUi

};

namespace Ui {
    class toStoragePrefsUI: public Ui_toStoragePrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSTORAGEPREFSUI_H
