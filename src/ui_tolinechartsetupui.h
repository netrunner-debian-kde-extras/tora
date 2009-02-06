/********************************************************************************
** Form generated from reading ui file 'tolinechartsetupui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOLINECHARTSETUPUI_H
#define UI_TOLINECHARTSETUPUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include "toresultview.h"

QT_BEGIN_NAMESPACE

class Ui_toLineChartSetupUI
{
public:
    QGridLayout *gridLayout;
    QSpinBox *Samples;
    QLabel *TextLabel1_2;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QLabel *TextLabel1;
    QLabel *TextLabel4;
    QLineEdit *MinValue;
    QLineEdit *MaxValue;
    QCheckBox *AutoMax;
    QCheckBox *AutoMin;
    QSpacerItem *spacerItem;
    QCheckBox *ShowLast;
    QCheckBox *ShowAxis;
    QCheckBox *ShowLegend;
    QPushButton *OkButton;
    QPushButton *CancelButton;
    QSpacerItem *spacerItem1;
    toListView *Enabled;
    QSpinBox *DisplaySamples;
    QCheckBox *AllSamples;
    QLabel *TextLabel1_2_2;
    QCheckBox *UnlimitedSamples;
    QLabel *TextLabel5;
    QSpinBox *Grids;

    void setupUi(QDialog *toLineChartSetupUI)
    {
    if (toLineChartSetupUI->objectName().isEmpty())
        toLineChartSetupUI->setObjectName(QString::fromUtf8("toLineChartSetupUI"));
    toLineChartSetupUI->resize(596, 483);
    gridLayout = new QGridLayout(toLineChartSetupUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    Samples = new QSpinBox(toLineChartSetupUI);
    Samples->setObjectName(QString::fromUtf8("Samples"));
    Samples->setMaximum(1000);

    gridLayout->addWidget(Samples, 5, 1, 1, 1);

    TextLabel1_2 = new QLabel(toLineChartSetupUI);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setWordWrap(false);

    gridLayout->addWidget(TextLabel1_2, 5, 0, 1, 1);

    GroupBox1 = new QGroupBox(toLineChartSetupUI);
    GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
    gridLayout1 = new QGridLayout(GroupBox1);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    TextLabel1 = new QLabel(GroupBox1);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout1->addWidget(TextLabel1, 0, 0, 1, 1);

    TextLabel4 = new QLabel(GroupBox1);
    TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
    TextLabel4->setWordWrap(false);

    gridLayout1->addWidget(TextLabel4, 3, 0, 1, 1);

    MinValue = new QLineEdit(GroupBox1);
    MinValue->setObjectName(QString::fromUtf8("MinValue"));

    gridLayout1->addWidget(MinValue, 5, 0, 1, 1);

    MaxValue = new QLineEdit(GroupBox1);
    MaxValue->setObjectName(QString::fromUtf8("MaxValue"));

    gridLayout1->addWidget(MaxValue, 2, 0, 1, 1);

    AutoMax = new QCheckBox(GroupBox1);
    AutoMax->setObjectName(QString::fromUtf8("AutoMax"));

    gridLayout1->addWidget(AutoMax, 1, 0, 1, 1);

    AutoMin = new QCheckBox(GroupBox1);
    AutoMin->setObjectName(QString::fromUtf8("AutoMin"));

    gridLayout1->addWidget(AutoMin, 4, 0, 1, 1);


    gridLayout->addWidget(GroupBox1, 0, 0, 1, 3);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 7, 1, 1, 1);

    ShowLast = new QCheckBox(toLineChartSetupUI);
    ShowLast->setObjectName(QString::fromUtf8("ShowLast"));

    gridLayout->addWidget(ShowLast, 1, 0, 1, 3);

    ShowAxis = new QCheckBox(toLineChartSetupUI);
    ShowAxis->setObjectName(QString::fromUtf8("ShowAxis"));

    gridLayout->addWidget(ShowAxis, 2, 0, 1, 3);

    ShowLegend = new QCheckBox(toLineChartSetupUI);
    ShowLegend->setObjectName(QString::fromUtf8("ShowLegend"));

    gridLayout->addWidget(ShowLegend, 3, 0, 1, 3);

    OkButton = new QPushButton(toLineChartSetupUI);
    OkButton->setObjectName(QString::fromUtf8("OkButton"));
    OkButton->setDefault(true);

    gridLayout->addWidget(OkButton, 8, 3, 1, 1);

    CancelButton = new QPushButton(toLineChartSetupUI);
    CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

    gridLayout->addWidget(CancelButton, 8, 4, 1, 1);

    spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 8, 0, 1, 3);

    Enabled = new toListView(toLineChartSetupUI);
    Enabled->setObjectName(QString::fromUtf8("Enabled"));

    gridLayout->addWidget(Enabled, 0, 3, 8, 2);

    DisplaySamples = new QSpinBox(toLineChartSetupUI);
    DisplaySamples->setObjectName(QString::fromUtf8("DisplaySamples"));
    DisplaySamples->setMaximum(1000);

    gridLayout->addWidget(DisplaySamples, 6, 1, 1, 1);

    AllSamples = new QCheckBox(toLineChartSetupUI);
    AllSamples->setObjectName(QString::fromUtf8("AllSamples"));

    gridLayout->addWidget(AllSamples, 6, 2, 1, 1);

    TextLabel1_2_2 = new QLabel(toLineChartSetupUI);
    TextLabel1_2_2->setObjectName(QString::fromUtf8("TextLabel1_2_2"));
    TextLabel1_2_2->setWordWrap(false);

    gridLayout->addWidget(TextLabel1_2_2, 6, 0, 1, 1);

    UnlimitedSamples = new QCheckBox(toLineChartSetupUI);
    UnlimitedSamples->setObjectName(QString::fromUtf8("UnlimitedSamples"));

    gridLayout->addWidget(UnlimitedSamples, 5, 2, 1, 1);

    TextLabel5 = new QLabel(toLineChartSetupUI);
    TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(TextLabel5->sizePolicy().hasHeightForWidth());
    TextLabel5->setSizePolicy(sizePolicy);
    TextLabel5->setWordWrap(false);

    gridLayout->addWidget(TextLabel5, 4, 0, 1, 1);

    Grids = new QSpinBox(toLineChartSetupUI);
    Grids->setObjectName(QString::fromUtf8("Grids"));

    gridLayout->addWidget(Grids, 4, 1, 1, 1);

    TextLabel5->setBuddy(Grids);
    QWidget::setTabOrder(AutoMax, MaxValue);
    QWidget::setTabOrder(MaxValue, AutoMin);
    QWidget::setTabOrder(AutoMin, MinValue);
    QWidget::setTabOrder(MinValue, ShowLast);
    QWidget::setTabOrder(ShowLast, ShowAxis);
    QWidget::setTabOrder(ShowAxis, ShowLegend);
    QWidget::setTabOrder(ShowLegend, Grids);
    QWidget::setTabOrder(Grids, Samples);
    QWidget::setTabOrder(Samples, UnlimitedSamples);
    QWidget::setTabOrder(UnlimitedSamples, DisplaySamples);
    QWidget::setTabOrder(DisplaySamples, AllSamples);
    QWidget::setTabOrder(AllSamples, OkButton);
    QWidget::setTabOrder(OkButton, CancelButton);

    retranslateUi(toLineChartSetupUI);
    QObject::connect(AutoMax, SIGNAL(toggled(bool)), MaxValue, SLOT(setDisabled(bool)));
    QObject::connect(AutoMin, SIGNAL(toggled(bool)), MinValue, SLOT(setDisabled(bool)));
    QObject::connect(OkButton, SIGNAL(clicked()), toLineChartSetupUI, SLOT(accept()));
    QObject::connect(CancelButton, SIGNAL(clicked()), toLineChartSetupUI, SLOT(reject()));
    QObject::connect(UnlimitedSamples, SIGNAL(toggled(bool)), Samples, SLOT(setDisabled(bool)));
    QObject::connect(AllSamples, SIGNAL(toggled(bool)), DisplaySamples, SLOT(setDisabled(bool)));

    QMetaObject::connectSlotsByName(toLineChartSetupUI);
    } // setupUi

    void retranslateUi(QDialog *toLineChartSetupUI)
    {
    toLineChartSetupUI->setWindowTitle(QApplication::translate("toLineChartSetupUI", "Chart setup", 0, QApplication::UnicodeUTF8));
    TextLabel1_2->setText(QApplication::translate("toLineChartSetupUI", "Number of samples to keep", 0, QApplication::UnicodeUTF8));
    GroupBox1->setTitle(QApplication::translate("toLineChartSetupUI", "Y-axis", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("toLineChartSetupUI", "Max value", 0, QApplication::UnicodeUTF8));
    TextLabel4->setText(QApplication::translate("toLineChartSetupUI", "Min value", 0, QApplication::UnicodeUTF8));
    AutoMax->setText(QApplication::translate("toLineChartSetupUI", "Auto detect", 0, QApplication::UnicodeUTF8));
    AutoMin->setText(QApplication::translate("toLineChartSetupUI", "Auto detect", 0, QApplication::UnicodeUTF8));
    ShowLast->setText(QApplication::translate("toLineChartSetupUI", "Show last value", 0, QApplication::UnicodeUTF8));
    ShowAxis->setText(QApplication::translate("toLineChartSetupUI", "Show axis legend", 0, QApplication::UnicodeUTF8));
    ShowLegend->setText(QApplication::translate("toLineChartSetupUI", "Show chart legend", 0, QApplication::UnicodeUTF8));
    OkButton->setText(QApplication::translate("toLineChartSetupUI", "&Ok", 0, QApplication::UnicodeUTF8));
    CancelButton->setText(QApplication::translate("toLineChartSetupUI", "Cancel", 0, QApplication::UnicodeUTF8));
    AllSamples->setText(QApplication::translate("toLineChartSetupUI", "All", 0, QApplication::UnicodeUTF8));
    TextLabel1_2_2->setText(QApplication::translate("toLineChartSetupUI", "Maximum number of samples to display", 0, QApplication::UnicodeUTF8));
    UnlimitedSamples->setText(QApplication::translate("toLineChartSetupUI", "Unlimited", 0, QApplication::UnicodeUTF8));
    TextLabel5->setText(QApplication::translate("toLineChartSetupUI", "Divide chart in grids?", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toLineChartSetupUI);
    } // retranslateUi

};

namespace Ui {
    class toLineChartSetupUI: public Ui_toLineChartSetupUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOLINECHARTSETUPUI_H
