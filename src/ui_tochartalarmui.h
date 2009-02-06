/********************************************************************************
** Form generated from reading ui file 'tochartalarmui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOCHARTALARMUI_H
#define UI_TOCHARTALARMUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include "toresultview.h"

QT_BEGIN_NAMESPACE

class Ui_toChartAlarmUI
{
public:
    QGridLayout *gridLayout;
    QComboBox *Operation;
    QComboBox *Action;
    QComboBox *Comparison;
    QLineEdit *Value;
    QLabel *TextLabel1;
    QLabel *TextLabel2;
    QLabel *TextLabel1_2;
    QLabel *TextLabel3;
    QHBoxLayout *hboxLayout;
    QSpacerItem *Spacer1;
    QPushButton *PushButton1;
    QPushButton *PushButton2;
    toListView *Charts;
    QSpacerItem *Spacer2;
    QCheckBox *Persistent;
    QLabel *ExtraLabel;
    QLineEdit *Extra;

    void setupUi(QDialog *toChartAlarmUI)
    {
    if (toChartAlarmUI->objectName().isEmpty())
        toChartAlarmUI->setObjectName(QString::fromUtf8("toChartAlarmUI"));
    toChartAlarmUI->resize(388, 509);
    gridLayout = new QGridLayout(toChartAlarmUI);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    Operation = new QComboBox(toChartAlarmUI);
    Operation->setObjectName(QString::fromUtf8("Operation"));

    gridLayout->addWidget(Operation, 0, 2, 1, 1);

    Action = new QComboBox(toChartAlarmUI);
    Action->setObjectName(QString::fromUtf8("Action"));

    gridLayout->addWidget(Action, 3, 2, 1, 1);

    Comparison = new QComboBox(toChartAlarmUI);
    Comparison->setObjectName(QString::fromUtf8("Comparison"));

    gridLayout->addWidget(Comparison, 1, 2, 1, 1);

    Value = new QLineEdit(toChartAlarmUI);
    Value->setObjectName(QString::fromUtf8("Value"));

    gridLayout->addWidget(Value, 2, 2, 1, 1);

    TextLabel1 = new QLabel(toChartAlarmUI);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout->addWidget(TextLabel1, 0, 1, 1, 1);

    TextLabel2 = new QLabel(toChartAlarmUI);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    TextLabel2->setWordWrap(false);

    gridLayout->addWidget(TextLabel2, 2, 1, 1, 1);

    TextLabel1_2 = new QLabel(toChartAlarmUI);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setWordWrap(false);

    gridLayout->addWidget(TextLabel1_2, 1, 1, 1, 1);

    TextLabel3 = new QLabel(toChartAlarmUI);
    TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
    TextLabel3->setWordWrap(false);

    gridLayout->addWidget(TextLabel3, 3, 1, 1, 1);

    hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
    hboxLayout->setSpacing(6);
#endif
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    Spacer1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(Spacer1);

    PushButton1 = new QPushButton(toChartAlarmUI);
    PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
    PushButton1->setDefault(true);

    hboxLayout->addWidget(PushButton1);

    PushButton2 = new QPushButton(toChartAlarmUI);
    PushButton2->setObjectName(QString::fromUtf8("PushButton2"));

    hboxLayout->addWidget(PushButton2);


    gridLayout->addLayout(hboxLayout, 7, 0, 1, 3);

    Charts = new toListView(toChartAlarmUI);
    Charts->setObjectName(QString::fromUtf8("Charts"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(Charts->sizePolicy().hasHeightForWidth());
    Charts->setSizePolicy(sizePolicy);
    Charts->setFocusPolicy(Qt::StrongFocus);

    gridLayout->addWidget(Charts, 0, 0, 7, 1);

    Spacer2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(Spacer2, 6, 2, 1, 1);

    Persistent = new QCheckBox(toChartAlarmUI);
    Persistent->setObjectName(QString::fromUtf8("Persistent"));

    gridLayout->addWidget(Persistent, 5, 1, 1, 2);

    ExtraLabel = new QLabel(toChartAlarmUI);
    ExtraLabel->setObjectName(QString::fromUtf8("ExtraLabel"));
    ExtraLabel->setWordWrap(false);

    gridLayout->addWidget(ExtraLabel, 4, 1, 1, 1);

    Extra = new QLineEdit(toChartAlarmUI);
    Extra->setObjectName(QString::fromUtf8("Extra"));

    gridLayout->addWidget(Extra, 4, 2, 1, 1);

    QWidget::setTabOrder(Charts, Operation);
    QWidget::setTabOrder(Operation, Comparison);
    QWidget::setTabOrder(Comparison, Value);
    QWidget::setTabOrder(Value, Action);
    QWidget::setTabOrder(Action, Extra);
    QWidget::setTabOrder(Extra, Persistent);
    QWidget::setTabOrder(Persistent, PushButton1);
    QWidget::setTabOrder(PushButton1, PushButton2);

    retranslateUi(toChartAlarmUI);
    QObject::connect(PushButton1, SIGNAL(clicked()), toChartAlarmUI, SLOT(accept()));
    QObject::connect(PushButton2, SIGNAL(clicked()), toChartAlarmUI, SLOT(reject()));
    QObject::connect(Action, SIGNAL(activated(int)), toChartAlarmUI, SLOT(changeValue(int)));

    QMetaObject::connectSlotsByName(toChartAlarmUI);
    } // setupUi

    void retranslateUi(QDialog *toChartAlarmUI)
    {
    toChartAlarmUI->setWindowTitle(QApplication::translate("toChartAlarmUI", "Chart alarm", 0, QApplication::UnicodeUTF8));
    Operation->insertItems(0, QStringList()
     << QApplication::translate("toChartAlarmUI", "Any", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toChartAlarmUI", "All", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toChartAlarmUI", "Sum", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toChartAlarmUI", "Average", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toChartAlarmUI", "Max", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toChartAlarmUI", "Min", 0, QApplication::UnicodeUTF8)
    );
    Action->insertItems(0, QStringList()
     << QApplication::translate("toChartAlarmUI", "Statusmessage", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toChartAlarmUI", "Email", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toChartAlarmUI", "Ignore", 0, QApplication::UnicodeUTF8)
    );
    Comparison->insertItems(0, QStringList()
     << QApplication::translate("toChartAlarmUI", "=", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toChartAlarmUI", "!=", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toChartAlarmUI", "<", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toChartAlarmUI", ">", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toChartAlarmUI", "<=", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toChartAlarmUI", ">=", 0, QApplication::UnicodeUTF8)
    );
    TextLabel1->setText(QApplication::translate("toChartAlarmUI", "Operation", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel1->setToolTip(QApplication::translate("toChartAlarmUI", "Operation to perform on the selected columns", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel2->setText(QApplication::translate("toChartAlarmUI", "Value", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel2->setToolTip(QApplication::translate("toChartAlarmUI", "Value to use in comparison.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel1_2->setText(QApplication::translate("toChartAlarmUI", "Comparison", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel1_2->setToolTip(QApplication::translate("toChartAlarmUI", "What comparison to do with the result from the above operation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel3->setText(QApplication::translate("toChartAlarmUI", "Action", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel3->setToolTip(QApplication::translate("toChartAlarmUI", "What to do when alarm is triggered.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    PushButton1->setText(QApplication::translate("toChartAlarmUI", "&Ok", 0, QApplication::UnicodeUTF8));
    PushButton2->setText(QApplication::translate("toChartAlarmUI", "Cancel", 0, QApplication::UnicodeUTF8));
    Persistent->setText(QApplication::translate("toChartAlarmUI", "Persistent", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Persistent->setToolTip(QApplication::translate("toChartAlarmUI", "Remember this alarm when restarting.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    ExtraLabel->setText(QString());
    Q_UNUSED(toChartAlarmUI);
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    static const char* const image0_data[] = { 
"22 22 2 1",
". c None",
"# c #a4c610",
"........######........",
".....###########......",
"....##############....",
"...################...",
"..######......######..",
"..#####........#####..",
".#####.......#..#####.",
".####.......###..####.",
"####.......#####..####",
"####......#####...####",
"####....#######...####",
"####....######....####",
"####...########...####",
".####.##########..####",
".####..####.#########.",
".#####..##...########.",
"..#####.......#######.",
"..######......######..",
"...###################",
"....##################",
"......###########.###.",
"........######.....#.."};


    switch (id) {
        case image0_ID: return QPixmap((const char**)image0_data);
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class toChartAlarmUI: public Ui_toChartAlarmUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOCHARTALARMUI_H
