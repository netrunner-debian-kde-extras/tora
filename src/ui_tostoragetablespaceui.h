/********************************************************************************
** Form generated from reading ui file 'tostoragetablespaceui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOSTORAGETABLESPACEUI_H
#define UI_TOSTORAGETABLESPACEUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "tofilesize.h"

QT_BEGIN_NAMESPACE

class Ui_toStorageTablespaceUI
{
public:
    QGridLayout *gridLayout;
    toFilesize *MinimumExtent;
    QGroupBox *ButtonGroup1;
    QGridLayout *gridLayout1;
    QCheckBox *Logging;
    QCheckBox *Online;
    QCheckBox *Permanent;
    QCheckBox *DefaultStorage;
    QGroupBox *ExtentGroup;
    QGridLayout *gridLayout2;
    QRadioButton *Dictionary;
    QRadioButton *LocalAuto;
    QRadioButton *LocalSelect;
    toFilesize *LocalUniform;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *toStorageTablespaceUI)
    {
    if (toStorageTablespaceUI->objectName().isEmpty())
        toStorageTablespaceUI->setObjectName(QString::fromUtf8("toStorageTablespaceUI"));
    toStorageTablespaceUI->resize(592, 480);
    gridLayout = new QGridLayout(toStorageTablespaceUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    MinimumExtent = new toFilesize(toStorageTablespaceUI);
    MinimumExtent->setObjectName(QString::fromUtf8("MinimumExtent"));

    gridLayout->addWidget(MinimumExtent, 0, 0, 1, 1);

    ButtonGroup1 = new QGroupBox(toStorageTablespaceUI);
    ButtonGroup1->setObjectName(QString::fromUtf8("ButtonGroup1"));
    gridLayout1 = new QGridLayout(ButtonGroup1);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    Logging = new QCheckBox(ButtonGroup1);
    Logging->setObjectName(QString::fromUtf8("Logging"));
    Logging->setChecked(true);

    gridLayout1->addWidget(Logging, 0, 0, 1, 1);

    Online = new QCheckBox(ButtonGroup1);
    Online->setObjectName(QString::fromUtf8("Online"));
    Online->setChecked(true);

    gridLayout1->addWidget(Online, 2, 0, 1, 1);

    Permanent = new QCheckBox(ButtonGroup1);
    Permanent->setObjectName(QString::fromUtf8("Permanent"));
    Permanent->setChecked(true);

    gridLayout1->addWidget(Permanent, 1, 0, 1, 1);

    DefaultStorage = new QCheckBox(ButtonGroup1);
    DefaultStorage->setObjectName(QString::fromUtf8("DefaultStorage"));

    gridLayout1->addWidget(DefaultStorage, 3, 0, 1, 1);


    gridLayout->addWidget(ButtonGroup1, 1, 0, 1, 1);

    ExtentGroup = new QGroupBox(toStorageTablespaceUI);
    ExtentGroup->setObjectName(QString::fromUtf8("ExtentGroup"));
    gridLayout2 = new QGridLayout(ExtentGroup);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    gridLayout2->setHorizontalSpacing(6);
    gridLayout2->setVerticalSpacing(6);
    gridLayout2->setContentsMargins(11, 11, 11, 11);
    Dictionary = new QRadioButton(ExtentGroup);
    Dictionary->setObjectName(QString::fromUtf8("Dictionary"));
    Dictionary->setChecked(true);

    gridLayout2->addWidget(Dictionary, 0, 0, 1, 1);

    LocalAuto = new QRadioButton(ExtentGroup);
    LocalAuto->setObjectName(QString::fromUtf8("LocalAuto"));

    gridLayout2->addWidget(LocalAuto, 1, 0, 1, 1);

    LocalSelect = new QRadioButton(ExtentGroup);
    LocalSelect->setObjectName(QString::fromUtf8("LocalSelect"));
    LocalSelect->setEnabled(true);

    gridLayout2->addWidget(LocalSelect, 2, 0, 1, 1);

    LocalUniform = new toFilesize(ExtentGroup);
    LocalUniform->setObjectName(QString::fromUtf8("LocalUniform"));
    LocalUniform->setEnabled(false);

    gridLayout2->addWidget(LocalUniform, 3, 0, 1, 1);


    gridLayout->addWidget(ExtentGroup, 2, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 3, 0, 1, 1);


    retranslateUi(toStorageTablespaceUI);
    QObject::connect(DefaultStorage, SIGNAL(toggled(bool)), toStorageTablespaceUI, SLOT(allowDefault(bool)));
    QObject::connect(Permanent, SIGNAL(toggled(bool)), toStorageTablespaceUI, SLOT(permanentToggle(bool)));
    QObject::connect(Dictionary, SIGNAL(toggled(bool)), toStorageTablespaceUI, SLOT(dictionaryToggle(bool)));
    QObject::connect(LocalSelect, SIGNAL(toggled(bool)), toStorageTablespaceUI, SLOT(uniformToggle(bool)));

    QMetaObject::connectSlotsByName(toStorageTablespaceUI);
    } // setupUi

    void retranslateUi(QWidget *toStorageTablespaceUI)
    {
    toStorageTablespaceUI->setWindowTitle(QApplication::translate("toStorageTablespaceUI", "Form1", 0, QApplication::UnicodeUTF8));
    ButtonGroup1->setTitle(QApplication::translate("toStorageTablespaceUI", "&Options", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Logging->setToolTip(QApplication::translate("toStorageTablespaceUI", "Should objects created in this tablespace be logging by default", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Logging->setText(QApplication::translate("toStorageTablespaceUI", "&Logging", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Online->setToolTip(QApplication::translate("toStorageTablespaceUI", "Should tablespace be online at the time of creation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Online->setText(QApplication::translate("toStorageTablespaceUI", "&Online", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Permanent->setToolTip(QApplication::translate("toStorageTablespaceUI", "Should objects in this tablespace be permanent after the end of the session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Permanent->setText(QApplication::translate("toStorageTablespaceUI", "&Permanent", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    DefaultStorage->setToolTip(QApplication::translate("toStorageTablespaceUI", "Specify default storage clause (In separate tab)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    DefaultStorage->setText(QApplication::translate("toStorageTablespaceUI", "&Default storage", 0, QApplication::UnicodeUTF8));
    ExtentGroup->setTitle(QApplication::translate("toStorageTablespaceUI", "&Extent allocation", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Dictionary->setToolTip(QApplication::translate("toStorageTablespaceUI", "Manage tablespace extents using dictionary tables", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Dictionary->setText(QApplication::translate("toStorageTablespaceUI", "&Dictionary", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    LocalAuto->setToolTip(QApplication::translate("toStorageTablespaceUI", "Specify how space is allocated in the tablespace", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    LocalAuto->setText(QApplication::translate("toStorageTablespaceUI", "Local &autoallocation", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    LocalSelect->setToolTip(QApplication::translate("toStorageTablespaceUI", "The tablespace is locally managed with fixed extent sizes of specified size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    LocalSelect->setText(QApplication::translate("toStorageTablespaceUI", "Local &uniform", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toStorageTablespaceUI);
    } // retranslateUi

};

namespace Ui {
    class toStorageTablespaceUI: public Ui_toStorageTablespaceUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSTORAGETABLESPACEUI_H
