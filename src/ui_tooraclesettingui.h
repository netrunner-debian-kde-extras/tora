/********************************************************************************
** Form generated from reading ui file 'tooraclesettingui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOORACLESETTINGUI_H
#define UI_TOORACLESETTINGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toOracleSettingUI
{
public:
    QGridLayout *gridLayout;
    QLabel *TextLabel6_2_2_2;
    QLabel *TextLabel6_2_3;
    QLineEdit *DefaultDate;
    QLineEdit *CheckPoint;
    QLabel *TextLabel6_3_2;
    QCheckBox *Unlimited;
    QLineEdit *MaxLong;
    QSpacerItem *Spacer6;
    QSpacerItem *Spacer2_2;
    QPushButton *CreatePlanTable;
    QLabel *TextLabel6_3;
    QLineEdit *ExplainPlan;
    QCheckBox *KeepPlans;
    QSpinBox *OpenCursors;
    QLabel *TextLabel1;

    void setupUi(QWidget *toOracleSettingUI)
    {
    if (toOracleSettingUI->objectName().isEmpty())
        toOracleSettingUI->setObjectName(QString::fromUtf8("toOracleSettingUI"));
    toOracleSettingUI->resize(361, 287);
    gridLayout = new QGridLayout(toOracleSettingUI);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    TextLabel6_2_2_2 = new QLabel(toOracleSettingUI);
    TextLabel6_2_2_2->setObjectName(QString::fromUtf8("TextLabel6_2_2_2"));
    TextLabel6_2_2_2->setWordWrap(false);

    gridLayout->addWidget(TextLabel6_2_2_2, 1, 0, 1, 1);

    TextLabel6_2_3 = new QLabel(toOracleSettingUI);
    TextLabel6_2_3->setObjectName(QString::fromUtf8("TextLabel6_2_3"));
    TextLabel6_2_3->setWordWrap(false);

    gridLayout->addWidget(TextLabel6_2_3, 0, 0, 1, 1);

    DefaultDate = new QLineEdit(toOracleSettingUI);
    DefaultDate->setObjectName(QString::fromUtf8("DefaultDate"));

    gridLayout->addWidget(DefaultDate, 1, 1, 1, 2);

    CheckPoint = new QLineEdit(toOracleSettingUI);
    CheckPoint->setObjectName(QString::fromUtf8("CheckPoint"));

    gridLayout->addWidget(CheckPoint, 0, 1, 1, 2);

    TextLabel6_3_2 = new QLabel(toOracleSettingUI);
    TextLabel6_3_2->setObjectName(QString::fromUtf8("TextLabel6_3_2"));
    TextLabel6_3_2->setWordWrap(false);

    gridLayout->addWidget(TextLabel6_3_2, 3, 0, 1, 1);

    Unlimited = new QCheckBox(toOracleSettingUI);
    Unlimited->setObjectName(QString::fromUtf8("Unlimited"));
    Unlimited->setChecked(true);

    gridLayout->addWidget(Unlimited, 3, 2, 1, 1);

    MaxLong = new QLineEdit(toOracleSettingUI);
    MaxLong->setObjectName(QString::fromUtf8("MaxLong"));
    MaxLong->setEnabled(false);

    gridLayout->addWidget(MaxLong, 3, 1, 1, 1);

    Spacer6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(Spacer6, 6, 2, 1, 1);

    Spacer2_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(Spacer2_2, 5, 0, 1, 2);

    CreatePlanTable = new QPushButton(toOracleSettingUI);
    CreatePlanTable->setObjectName(QString::fromUtf8("CreatePlanTable"));
    CreatePlanTable->setEnabled(false);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(CreatePlanTable->sizePolicy().hasHeightForWidth());
    CreatePlanTable->setSizePolicy(sizePolicy);

    gridLayout->addWidget(CreatePlanTable, 5, 2, 1, 1);

    TextLabel6_3 = new QLabel(toOracleSettingUI);
    TextLabel6_3->setObjectName(QString::fromUtf8("TextLabel6_3"));
    TextLabel6_3->setWordWrap(false);

    gridLayout->addWidget(TextLabel6_3, 4, 0, 1, 1);

    ExplainPlan = new QLineEdit(toOracleSettingUI);
    ExplainPlan->setObjectName(QString::fromUtf8("ExplainPlan"));

    gridLayout->addWidget(ExplainPlan, 4, 1, 1, 1);

    KeepPlans = new QCheckBox(toOracleSettingUI);
    KeepPlans->setObjectName(QString::fromUtf8("KeepPlans"));

    gridLayout->addWidget(KeepPlans, 4, 2, 1, 1);

    OpenCursors = new QSpinBox(toOracleSettingUI);
    OpenCursors->setObjectName(QString::fromUtf8("OpenCursors"));
    OpenCursors->setMinimum(1);

    gridLayout->addWidget(OpenCursors, 2, 2, 1, 1);

    TextLabel1 = new QLabel(toOracleSettingUI);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout->addWidget(TextLabel1, 2, 0, 1, 2);

    TextLabel6_2_2_2->setBuddy(DefaultDate);
    TextLabel6_2_3->setBuddy(CheckPoint);
    TextLabel6_3_2->setBuddy(ExplainPlan);
    TextLabel6_3->setBuddy(ExplainPlan);
    TextLabel1->setBuddy(OpenCursors);
    QWidget::setTabOrder(CheckPoint, DefaultDate);
    QWidget::setTabOrder(DefaultDate, OpenCursors);
    QWidget::setTabOrder(OpenCursors, MaxLong);
    QWidget::setTabOrder(MaxLong, Unlimited);
    QWidget::setTabOrder(Unlimited, ExplainPlan);
    QWidget::setTabOrder(ExplainPlan, KeepPlans);
    QWidget::setTabOrder(KeepPlans, CreatePlanTable);

    retranslateUi(toOracleSettingUI);
    QObject::connect(CreatePlanTable, SIGNAL(clicked()), toOracleSettingUI, SLOT(createPlanTable()));
    QObject::connect(Unlimited, SIGNAL(toggled(bool)), MaxLong, SLOT(setDisabled(bool)));

    QMetaObject::connectSlotsByName(toOracleSettingUI);
    } // setupUi

    void retranslateUi(QWidget *toOracleSettingUI)
    {
    toOracleSettingUI->setWindowTitle(QApplication::translate("toOracleSettingUI", "Form1", 0, QApplication::UnicodeUTF8));
    TextLabel6_2_2_2->setText(QApplication::translate("toOracleSettingUI", "&Default date format", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel6_2_2_2->setToolTip(QApplication::translate("toOracleSettingUI", "The default dateformat to use when querying the database.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel6_2_3->setText(QApplication::translate("toOracleSettingUI", "&Checkpoint name", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel6_2_3->setToolTip(QApplication::translate("toOracleSettingUI", "The name of the checkpoint used when needed to rollback work.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel6_3_2->setText(QApplication::translate("toOracleSettingUI", "&Max long and LOB data length", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel6_3_2->setToolTip(QApplication::translate("toOracleSettingUI", "Max length to read from LOB or LONG data fields. LONG:s can not be specified unlimited but will be defaulted to 33000 if unlimited.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Unlimited->setText(QApplication::translate("toOracleSettingUI", "Unlimited", 0, QApplication::UnicodeUTF8));
    CreatePlanTable->setText(QApplication::translate("toOracleSettingUI", "Create Table", 0, QApplication::UnicodeUTF8));
    TextLabel6_3->setText(QApplication::translate("toOracleSettingUI", "&Explain plan table", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel6_3->setToolTip(QApplication::translate("toOracleSettingUI", "Name of the table to put explain plan output in.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    KeepPlans->setText(QApplication::translate("toOracleSettingUI", "&Keep plans", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    KeepPlans->setToolTip(QApplication::translate("toOracleSettingUI", "Keep records for the plan explanations in the plan table.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel1->setText(QApplication::translate("toOracleSettingUI", "Maximum cursors to keep open", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toOracleSettingUI);
    } // retranslateUi

};

namespace Ui {
    class toOracleSettingUI: public Ui_toOracleSettingUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOORACLESETTINGUI_H
