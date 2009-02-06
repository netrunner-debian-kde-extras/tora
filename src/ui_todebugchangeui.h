/********************************************************************************
** Form generated from reading ui file 'todebugchangeui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TODEBUGCHANGEUI_H
#define UI_TODEBUGCHANGEUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include "tomarkedtext.h"

QT_BEGIN_NAMESPACE

class Ui_toDebugChangeUI
{
public:
    QGridLayout *gridLayout;
    QCheckBox *NullValue;
    QPushButton *PushButton1_2;
    QPushButton *PushButton1;
    QLabel *HeadLabel;
    QLabel *TextLabel1;
    toMarkedText *Value;
    QSpinBox *Index;

    void setupUi(QDialog *toDebugChangeUI)
    {
    if (toDebugChangeUI->objectName().isEmpty())
        toDebugChangeUI->setObjectName(QString::fromUtf8("toDebugChangeUI"));
    toDebugChangeUI->resize(396, 180);
    gridLayout = new QGridLayout(toDebugChangeUI);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    NullValue = new QCheckBox(toDebugChangeUI);
    NullValue->setObjectName(QString::fromUtf8("NullValue"));

    gridLayout->addWidget(NullValue, 1, 0, 1, 1);

    PushButton1_2 = new QPushButton(toDebugChangeUI);
    PushButton1_2->setObjectName(QString::fromUtf8("PushButton1_2"));

    gridLayout->addWidget(PushButton1_2, 3, 2, 1, 1);

    PushButton1 = new QPushButton(toDebugChangeUI);
    PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
    PushButton1->setDefault(true);

    gridLayout->addWidget(PushButton1, 3, 1, 1, 1);

    HeadLabel = new QLabel(toDebugChangeUI);
    HeadLabel->setObjectName(QString::fromUtf8("HeadLabel"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(HeadLabel->sizePolicy().hasHeightForWidth());
    HeadLabel->setSizePolicy(sizePolicy);
    HeadLabel->setWordWrap(false);

    gridLayout->addWidget(HeadLabel, 0, 0, 1, 3);

    TextLabel1 = new QLabel(toDebugChangeUI);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
    TextLabel1->setWordWrap(false);

    gridLayout->addWidget(TextLabel1, 1, 1, 1, 1);

    Value = new toMarkedText(toDebugChangeUI);
    Value->setObjectName(QString::fromUtf8("Value"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(7));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(Value->sizePolicy().hasHeightForWidth());
    Value->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(Value, 2, 0, 1, 3);

    Index = new QSpinBox(toDebugChangeUI);
    Index->setObjectName(QString::fromUtf8("Index"));
    Index->setMaximum(2147483647);
    Index->setMinimum(-2147483647);
    Index->setValue(1);

    gridLayout->addWidget(Index, 1, 2, 1, 1);

    TextLabel1->setBuddy(Index);
    QWidget::setTabOrder(PushButton1, PushButton1_2);

    retranslateUi(toDebugChangeUI);
    QObject::connect(PushButton1, SIGNAL(clicked()), toDebugChangeUI, SLOT(accept()));
    QObject::connect(PushButton1_2, SIGNAL(clicked()), toDebugChangeUI, SLOT(reject()));
    QObject::connect(NullValue, SIGNAL(toggled(bool)), Value, SLOT(setDisabled(bool)));

    QMetaObject::connectSlotsByName(toDebugChangeUI);
    } // setupUi

    void retranslateUi(QDialog *toDebugChangeUI)
    {
    toDebugChangeUI->setWindowTitle(QApplication::translate("toDebugChangeUI", "Change value of watch", 0, QApplication::UnicodeUTF8));
    NullValue->setText(QApplication::translate("toDebugChangeUI", "NULL", 0, QApplication::UnicodeUTF8));
    PushButton1_2->setText(QApplication::translate("toDebugChangeUI", "Cancel", 0, QApplication::UnicodeUTF8));
    PushButton1->setText(QApplication::translate("toDebugChangeUI", "&Ok", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("toDebugChangeUI", "&Index", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toDebugChangeUI);
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
    class toDebugChangeUI: public Ui_toDebugChangeUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODEBUGCHANGEUI_H
