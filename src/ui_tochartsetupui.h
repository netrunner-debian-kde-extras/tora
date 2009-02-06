/********************************************************************************
** Form generated from reading ui file 'tochartsetupui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOCHARTSETUPUI_H
#define UI_TOCHARTSETUPUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "toresultview.h"

QT_BEGIN_NAMESPACE

class Ui_toChartSetupUI
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QLineEdit *Filename;
    QPushButton *BrowseButton;
    QCheckBox *Persistent;
    QCheckBox *Enabled;
    QLabel *TextLabel2;
    QWidget *ChartFrame;
    QVBoxLayout *vboxLayout;
    QGroupBox *AlarmGroup;
    QGridLayout *gridLayout2;
    QPushButton *AddButton;
    toListView *Alarms;
    QSpacerItem *spacerItem;
    QPushButton *RemoveButton;
    QPushButton *ModifyButton;
    QPushButton *CancelButton;
    QPushButton *OkButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *toChartSetupUI)
    {
    if (toChartSetupUI->objectName().isEmpty())
        toChartSetupUI->setObjectName(QString::fromUtf8("toChartSetupUI"));
    toChartSetupUI->resize(588, 480);
    gridLayout = new QGridLayout(toChartSetupUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(0, 0, 0, 0);
    GroupBox1 = new QGroupBox(toChartSetupUI);
    GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(GroupBox1->sizePolicy().hasHeightForWidth());
    GroupBox1->setSizePolicy(sizePolicy);
    gridLayout1 = new QGridLayout(GroupBox1);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    Filename = new QLineEdit(GroupBox1);
    Filename->setObjectName(QString::fromUtf8("Filename"));
    Filename->setEnabled(false);

    gridLayout1->addWidget(Filename, 2, 0, 1, 1);

    BrowseButton = new QPushButton(GroupBox1);
    BrowseButton->setObjectName(QString::fromUtf8("BrowseButton"));
    BrowseButton->setEnabled(false);

    gridLayout1->addWidget(BrowseButton, 2, 1, 1, 1);

    Persistent = new QCheckBox(GroupBox1);
    Persistent->setObjectName(QString::fromUtf8("Persistent"));
    Persistent->setEnabled(false);

    gridLayout1->addWidget(Persistent, 3, 0, 1, 2);

    Enabled = new QCheckBox(GroupBox1);
    Enabled->setObjectName(QString::fromUtf8("Enabled"));

    gridLayout1->addWidget(Enabled, 0, 0, 1, 2);

    TextLabel2 = new QLabel(GroupBox1);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    TextLabel2->setWordWrap(false);

    gridLayout1->addWidget(TextLabel2, 1, 0, 1, 2);


    hboxLayout->addWidget(GroupBox1);

    ChartFrame = new QWidget(toChartSetupUI);
    ChartFrame->setObjectName(QString::fromUtf8("ChartFrame"));
    QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(ChartFrame->sizePolicy().hasHeightForWidth());
    ChartFrame->setSizePolicy(sizePolicy1);
    vboxLayout = new QVBoxLayout(ChartFrame);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));

    hboxLayout->addWidget(ChartFrame);


    gridLayout->addLayout(hboxLayout, 0, 0, 1, 3);

    AlarmGroup = new QGroupBox(toChartSetupUI);
    AlarmGroup->setObjectName(QString::fromUtf8("AlarmGroup"));
    QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(AlarmGroup->sizePolicy().hasHeightForWidth());
    AlarmGroup->setSizePolicy(sizePolicy2);
    gridLayout2 = new QGridLayout(AlarmGroup);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    gridLayout2->setHorizontalSpacing(6);
    gridLayout2->setVerticalSpacing(6);
    gridLayout2->setContentsMargins(11, 11, 11, 11);
    AddButton = new QPushButton(AlarmGroup);
    AddButton->setObjectName(QString::fromUtf8("AddButton"));

    gridLayout2->addWidget(AddButton, 0, 1, 1, 1);

    Alarms = new toListView(AlarmGroup);
    Alarms->setObjectName(QString::fromUtf8("Alarms"));
    QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(Alarms->sizePolicy().hasHeightForWidth());
    Alarms->setSizePolicy(sizePolicy3);
    Alarms->setFocusPolicy(Qt::StrongFocus);

    gridLayout2->addWidget(Alarms, 0, 0, 4, 1);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout2->addItem(spacerItem, 3, 1, 1, 1);

    RemoveButton = new QPushButton(AlarmGroup);
    RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));

    gridLayout2->addWidget(RemoveButton, 2, 1, 1, 1);

    ModifyButton = new QPushButton(AlarmGroup);
    ModifyButton->setObjectName(QString::fromUtf8("ModifyButton"));

    gridLayout2->addWidget(ModifyButton, 1, 1, 1, 1);


    gridLayout->addWidget(AlarmGroup, 1, 0, 1, 3);

    CancelButton = new QPushButton(toChartSetupUI);
    CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

    gridLayout->addWidget(CancelButton, 2, 2, 1, 1);

    OkButton = new QPushButton(toChartSetupUI);
    OkButton->setObjectName(QString::fromUtf8("OkButton"));
    OkButton->setDefault(true);

    gridLayout->addWidget(OkButton, 2, 1, 1, 1);

    spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 2, 0, 1, 1);

    QWidget::setTabOrder(Filename, BrowseButton);
    QWidget::setTabOrder(BrowseButton, Persistent);
    QWidget::setTabOrder(Persistent, Alarms);
    QWidget::setTabOrder(Alarms, AddButton);
    QWidget::setTabOrder(AddButton, RemoveButton);
    QWidget::setTabOrder(RemoveButton, OkButton);
    QWidget::setTabOrder(OkButton, CancelButton);

    retranslateUi(toChartSetupUI);
    QObject::connect(OkButton, SIGNAL(clicked()), toChartSetupUI, SLOT(accept()));
    QObject::connect(CancelButton, SIGNAL(clicked()), toChartSetupUI, SLOT(reject()));
    QObject::connect(Enabled, SIGNAL(toggled(bool)), Filename, SLOT(setEnabled(bool)));
    QObject::connect(Enabled, SIGNAL(toggled(bool)), BrowseButton, SLOT(setEnabled(bool)));
    QObject::connect(Enabled, SIGNAL(toggled(bool)), Persistent, SLOT(setEnabled(bool)));

    QMetaObject::connectSlotsByName(toChartSetupUI);
    } // setupUi

    void retranslateUi(QDialog *toChartSetupUI)
    {
    toChartSetupUI->setWindowTitle(QApplication::translate("toChartSetupUI", "Chart manager setup", 0, QApplication::UnicodeUTF8));
    GroupBox1->setTitle(QApplication::translate("toChartSetupUI", "Track chart to file", 0, QApplication::UnicodeUTF8));
    BrowseButton->setText(QApplication::translate("toChartSetupUI", "Browse", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Persistent->setToolTip(QApplication::translate("toChartSetupUI", "Remember to track this chart to this file always when starting.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Persistent->setText(QApplication::translate("toChartSetupUI", "Persistent", 0, QApplication::UnicodeUTF8));
    Enabled->setText(QApplication::translate("toChartSetupUI", "Enable tracking", 0, QApplication::UnicodeUTF8));
    TextLabel2->setText(QApplication::translate("toChartSetupUI", "Filename", 0, QApplication::UnicodeUTF8));
    AlarmGroup->setTitle(QApplication::translate("toChartSetupUI", "Alarms", 0, QApplication::UnicodeUTF8));
    AddButton->setText(QApplication::translate("toChartSetupUI", "&Add", 0, QApplication::UnicodeUTF8));
    RemoveButton->setText(QApplication::translate("toChartSetupUI", "Remove", 0, QApplication::UnicodeUTF8));
    ModifyButton->setText(QApplication::translate("toChartSetupUI", "Modify", 0, QApplication::UnicodeUTF8));
    CancelButton->setText(QApplication::translate("toChartSetupUI", "Cancel", 0, QApplication::UnicodeUTF8));
    OkButton->setText(QApplication::translate("toChartSetupUI", "&Ok", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toChartSetupUI);
    } // retranslateUi

};

namespace Ui {
    class toChartSetupUI: public Ui_toChartSetupUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOCHARTSETUPUI_H
