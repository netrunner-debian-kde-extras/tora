/********************************************************************************
** Form generated from reading ui file 'tohelpsetupui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOHELPSETUPUI_H
#define UI_TOHELPSETUPUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "totreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_toHelpSetupUI
{
public:
    QGridLayout *gridLayout;
    toTreeWidget *FileList;
    QPushButton *AddButton;
    QSpacerItem *spacerItem;
    QPushButton *RemoveButton;
    QPushButton *AddOracle;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *toHelpSetupUI)
    {
    if (toHelpSetupUI->objectName().isEmpty())
        toHelpSetupUI->setObjectName(QString::fromUtf8("toHelpSetupUI"));
    toHelpSetupUI->resize(506, 448);
    gridLayout = new QGridLayout(toHelpSetupUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(0, 0, 0, 0);
    FileList = new toTreeWidget(toHelpSetupUI);
    FileList->setObjectName(QString::fromUtf8("FileList"));
    FileList->setAllColumnsShowFocus(true);

    gridLayout->addWidget(FileList, 0, 0, 1, 5);

    AddButton = new QPushButton(toHelpSetupUI);
    AddButton->setObjectName(QString::fromUtf8("AddButton"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(AddButton->sizePolicy().hasHeightForWidth());
    AddButton->setSizePolicy(sizePolicy);

    gridLayout->addWidget(AddButton, 1, 4, 1, 1);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 1, 3, 1, 1);

    RemoveButton = new QPushButton(toHelpSetupUI);
    RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));
    sizePolicy.setHeightForWidth(RemoveButton->sizePolicy().hasHeightForWidth());
    RemoveButton->setSizePolicy(sizePolicy);

    gridLayout->addWidget(RemoveButton, 1, 0, 1, 1);

    AddOracle = new QPushButton(toHelpSetupUI);
    AddOracle->setObjectName(QString::fromUtf8("AddOracle"));
    sizePolicy.setHeightForWidth(AddOracle->sizePolicy().hasHeightForWidth());
    AddOracle->setSizePolicy(sizePolicy);

    gridLayout->addWidget(AddOracle, 1, 2, 1, 1);

    spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 1, 1, 1, 1);

    QWidget::setTabOrder(FileList, AddButton);
    QWidget::setTabOrder(AddButton, RemoveButton);

    retranslateUi(toHelpSetupUI);
    QObject::connect(AddButton, SIGNAL(clicked()), toHelpSetupUI, SLOT(addFile()));
    QObject::connect(RemoveButton, SIGNAL(clicked()), toHelpSetupUI, SLOT(delFile()));
    QObject::connect(AddOracle, SIGNAL(clicked()), toHelpSetupUI, SLOT(oracleManuals()));

    QMetaObject::connectSlotsByName(toHelpSetupUI);
    } // setupUi

    void retranslateUi(QWidget *toHelpSetupUI)
    {
    toHelpSetupUI->setWindowTitle(QApplication::translate("toHelpSetupUI", "Form1", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    toHelpSetupUI->setToolTip(QApplication::translate("toHelpSetupUI", "Add manuals from an Oracle index page.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP


#ifndef QT_NO_WHATSTHIS
    toHelpSetupUI->setWhatsThis(QApplication::translate("toHelpSetupUI", "Add manuals from an Oracle index page. This is the index page that links to the actual manuals. Not the master index page that links to different categories of manuals.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS

    FileList->headerItem()->setText(0, QApplication::translate("toHelpSetupUI", "Title", 0, QApplication::UnicodeUTF8));
    FileList->headerItem()->setText(1, QApplication::translate("toHelpSetupUI", "Filename", 0, QApplication::UnicodeUTF8));
    AddButton->setText(QApplication::translate("toHelpSetupUI", "&Add Manual", 0, QApplication::UnicodeUTF8));
    RemoveButton->setText(QApplication::translate("toHelpSetupUI", "&Remove Manual", 0, QApplication::UnicodeUTF8));
    AddOracle->setText(QApplication::translate("toHelpSetupUI", "&Oracle Manuals", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toHelpSetupUI);
    } // retranslateUi

};

namespace Ui {
    class toHelpSetupUI: public Ui_toHelpSetupUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOHELPSETUPUI_H
