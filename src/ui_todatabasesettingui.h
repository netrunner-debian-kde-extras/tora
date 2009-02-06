/********************************************************************************
** Form generated from reading ui file 'todatabasesettingui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TODATABASESETTINGUI_H
#define UI_TODATABASESETTINGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toDatabaseSettingUI
{
public:
    QGridLayout *gridLayout;
    QCheckBox *AutoCommit;
    QComboBox *ObjectCache;
    QGroupBox *QueryGroup;
    QGridLayout *gridLayout1;
    QLabel *TextLabel6_2_2;
    QCheckBox *ReadAll;
    QLabel *TextLabel6;
    QLabel *TextLabel6_2;
    QCheckBox *UnlimitedContent;
    QSpinBox *MaxColDisp;
    QSpinBox *InitialFetch;
    QSpinBox *MaxContent;
    QCheckBox *FirewallMode;
    QGroupBox *GroupBox3;
    QGridLayout *gridLayout2;
    QLabel *TextLabel1_2;
    QSpinBox *Decimals;
    QCheckBox *IndicateEmpty;
    QComboBox *NumberFormat;
    QPushButton *IndicateEmptyColor;
    QLabel *TextLabel3;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *toDatabaseSettingUI)
    {
    if (toDatabaseSettingUI->objectName().isEmpty())
        toDatabaseSettingUI->setObjectName(QString::fromUtf8("toDatabaseSettingUI"));
    toDatabaseSettingUI->resize(792, 526);
    gridLayout = new QGridLayout(toDatabaseSettingUI);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    AutoCommit = new QCheckBox(toDatabaseSettingUI);
    AutoCommit->setObjectName(QString::fromUtf8("AutoCommit"));

    gridLayout->addWidget(AutoCommit, 0, 0, 1, 1);

    ObjectCache = new QComboBox(toDatabaseSettingUI);
    ObjectCache->setObjectName(QString::fromUtf8("ObjectCache"));

    gridLayout->addWidget(ObjectCache, 1, 0, 1, 1);

    QueryGroup = new QGroupBox(toDatabaseSettingUI);
    QueryGroup->setObjectName(QString::fromUtf8("QueryGroup"));
    gridLayout1 = new QGridLayout(QueryGroup);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    TextLabel6_2_2 = new QLabel(QueryGroup);
    TextLabel6_2_2->setObjectName(QString::fromUtf8("TextLabel6_2_2"));
    TextLabel6_2_2->setWordWrap(false);

    gridLayout1->addWidget(TextLabel6_2_2, 2, 0, 1, 1);

    ReadAll = new QCheckBox(QueryGroup);
    ReadAll->setObjectName(QString::fromUtf8("ReadAll"));

    gridLayout1->addWidget(ReadAll, 0, 2, 1, 1);

    TextLabel6 = new QLabel(QueryGroup);
    TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));
    TextLabel6->setWordWrap(false);

    gridLayout1->addWidget(TextLabel6, 0, 0, 1, 1);

    TextLabel6_2 = new QLabel(QueryGroup);
    TextLabel6_2->setObjectName(QString::fromUtf8("TextLabel6_2"));
    TextLabel6_2->setWordWrap(false);

    gridLayout1->addWidget(TextLabel6_2, 1, 0, 1, 1);

    UnlimitedContent = new QCheckBox(QueryGroup);
    UnlimitedContent->setObjectName(QString::fromUtf8("UnlimitedContent"));

    gridLayout1->addWidget(UnlimitedContent, 1, 2, 1, 1);

    MaxColDisp = new QSpinBox(QueryGroup);
    MaxColDisp->setObjectName(QString::fromUtf8("MaxColDisp"));
    MaxColDisp->setMaximum(999999999);

    gridLayout1->addWidget(MaxColDisp, 2, 1, 1, 2);

    InitialFetch = new QSpinBox(QueryGroup);
    InitialFetch->setObjectName(QString::fromUtf8("InitialFetch"));

    gridLayout1->addWidget(InitialFetch, 0, 1, 1, 1);

    MaxContent = new QSpinBox(QueryGroup);
    MaxContent->setObjectName(QString::fromUtf8("MaxContent"));
    MaxContent->setMaximum(999999999);

    gridLayout1->addWidget(MaxContent, 1, 1, 1, 1);

    FirewallMode = new QCheckBox(QueryGroup);
    FirewallMode->setObjectName(QString::fromUtf8("FirewallMode"));

    gridLayout1->addWidget(FirewallMode, 3, 0, 1, 1);


    gridLayout->addWidget(QueryGroup, 2, 0, 1, 1);

    GroupBox3 = new QGroupBox(toDatabaseSettingUI);
    GroupBox3->setObjectName(QString::fromUtf8("GroupBox3"));
    gridLayout2 = new QGridLayout(GroupBox3);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    gridLayout2->setHorizontalSpacing(6);
    gridLayout2->setVerticalSpacing(6);
    gridLayout2->setContentsMargins(11, 11, 11, 11);
    TextLabel1_2 = new QLabel(GroupBox3);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setWordWrap(false);

    gridLayout2->addWidget(TextLabel1_2, 1, 0, 1, 1);

    Decimals = new QSpinBox(GroupBox3);
    Decimals->setObjectName(QString::fromUtf8("Decimals"));
    Decimals->setEnabled(false);
    Decimals->setMaximum(20);
    Decimals->setValue(2);

    gridLayout2->addWidget(Decimals, 1, 3, 1, 1);

    IndicateEmpty = new QCheckBox(GroupBox3);
    IndicateEmpty->setObjectName(QString::fromUtf8("IndicateEmpty"));

    gridLayout2->addWidget(IndicateEmpty, 0, 0, 1, 2);

    NumberFormat = new QComboBox(GroupBox3);
    NumberFormat->setObjectName(QString::fromUtf8("NumberFormat"));

    gridLayout2->addWidget(NumberFormat, 1, 1, 1, 1);

    IndicateEmptyColor = new QPushButton(GroupBox3);
    IndicateEmptyColor->setObjectName(QString::fromUtf8("IndicateEmptyColor"));

    gridLayout2->addWidget(IndicateEmptyColor, 0, 2, 1, 2);

    TextLabel3 = new QLabel(GroupBox3);
    TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
    TextLabel3->setWordWrap(false);

    gridLayout2->addWidget(TextLabel3, 1, 2, 1, 1);


    gridLayout->addWidget(GroupBox3, 3, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 4, 0, 1, 1);

    TextLabel6_2_2->setBuddy(MaxColDisp);
    TextLabel6->setBuddy(InitialFetch);
    TextLabel6_2->setBuddy(MaxContent);
    TextLabel3->setBuddy(Decimals);
    QWidget::setTabOrder(AutoCommit, ObjectCache);
    QWidget::setTabOrder(ObjectCache, ReadAll);
    QWidget::setTabOrder(ReadAll, UnlimitedContent);
    QWidget::setTabOrder(UnlimitedContent, IndicateEmpty);
    QWidget::setTabOrder(IndicateEmpty, NumberFormat);
    QWidget::setTabOrder(NumberFormat, Decimals);

    retranslateUi(toDatabaseSettingUI);
    QObject::connect(NumberFormat, SIGNAL(activated(QString)), toDatabaseSettingUI, SLOT(numberFormatChange()));
    QObject::connect(IndicateEmptyColor, SIGNAL(clicked()), toDatabaseSettingUI, SLOT(IndicateEmptyColor_clicked()));

    QMetaObject::connectSlotsByName(toDatabaseSettingUI);
    } // setupUi

    void retranslateUi(QWidget *toDatabaseSettingUI)
    {
    toDatabaseSettingUI->setWindowTitle(QApplication::translate("toDatabaseSettingUI", "toDatabaseSettingUI", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    AutoCommit->setToolTip(QApplication::translate("toDatabaseSettingUI", "Specify if changes should be automatically commited.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    AutoCommit->setText(QApplication::translate("toDatabaseSettingUI", "&Autocommit changes", 0, QApplication::UnicodeUTF8));
    AutoCommit->setShortcut(QApplication::translate("toDatabaseSettingUI", "Alt+A", 0, QApplication::UnicodeUTF8));
    ObjectCache->insertItems(0, QStringList()
     << QApplication::translate("toDatabaseSettingUI", "Start read object cache when needed", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toDatabaseSettingUI", "Read object cache on connect", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toDatabaseSettingUI", "Never read object cache until mandatory", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toDatabaseSettingUI", "Never read object cache (Will leave parts of application nonfunctianal)", 0, QApplication::UnicodeUTF8)
    );
    QueryGroup->setTitle(QApplication::translate("toDatabaseSettingUI", "Query settings", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel6_2_2->setToolTip(QApplication::translate("toDatabaseSettingUI", "The largest default size of a column in query results.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel6_2_2->setText(QApplication::translate("toDatabaseSettingUI", "Maximum size &display", 0, QApplication::UnicodeUTF8));
    ReadAll->setText(QApplication::translate("toDatabaseSettingUI", "&All", 0, QApplication::UnicodeUTF8));
    ReadAll->setShortcut(QApplication::translate("toDatabaseSettingUI", "Alt+A", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel6->setToolTip(QApplication::translate("toDatabaseSettingUI", "The number of rows to always fetch when executing a query.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel6->setText(QApplication::translate("toDatabaseSettingUI", "&Initial rows to fetch in query", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel6_2->setToolTip(QApplication::translate("toDatabaseSettingUI", "Number of rows to initially start reading in content editor, use unlimited on slow connections.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel6_2->setText(QApplication::translate("toDatabaseSettingUI", "Initially &read in content editor", 0, QApplication::UnicodeUTF8));
    UnlimitedContent->setText(QApplication::translate("toDatabaseSettingUI", "&All", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    FirewallMode->setToolTip(QApplication::translate("toDatabaseSettingUI", "When enabled idle queries will request data at regular intervals to keep the connection alive.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    FirewallMode->setText(QApplication::translate("toDatabaseSettingUI", "&Firewall Mode", 0, QApplication::UnicodeUTF8));
    GroupBox3->setTitle(QApplication::translate("toDatabaseSettingUI", "Dataformat", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel1_2->setToolTip(QApplication::translate("toDatabaseSettingUI", "The way numbers should be presented.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel1_2->setText(QApplication::translate("toDatabaseSettingUI", "Number format", 0, QApplication::UnicodeUTF8));
    IndicateEmpty->setText(QApplication::translate("toDatabaseSettingUI", "Indicate empty values as '' instead of &NULL as {null}.", 0, QApplication::UnicodeUTF8));
    NumberFormat->insertItems(0, QStringList()
     << QApplication::translate("toDatabaseSettingUI", "Default", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toDatabaseSettingUI", "Scientific", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toDatabaseSettingUI", "Fixed decimal", 0, QApplication::UnicodeUTF8)
    );
    IndicateEmptyColor->setText(QApplication::translate("toDatabaseSettingUI", "NULL background color", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel3->setToolTip(QApplication::translate("toDatabaseSettingUI", "Number of decimals for fixed decimal format.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel3->setText(QApplication::translate("toDatabaseSettingUI", "&Decimals", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toDatabaseSettingUI);
    } // retranslateUi

};

namespace Ui {
    class toDatabaseSettingUI: public Ui_toDatabaseSettingUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODATABASESETTINGUI_H
