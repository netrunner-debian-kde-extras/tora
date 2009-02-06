/********************************************************************************
** Form generated from reading ui file 'tostoragedefinitionui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOSTORAGEDEFINITIONUI_H
#define UI_TOSTORAGEDEFINITIONUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "tofilesize.h"

QT_BEGIN_NAMESPACE

class Ui_toStorageDefinitionUI
{
public:
    QGridLayout *gridLayout;
    toFilesize *InitialSize;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QFrame *Line1;
    QSpinBox *InitialExtent;
    QSpinBox *MaximumExtent;
    QLabel *TextLabel1;
    QLabel *TextLabel2;
    QCheckBox *UnlimitedExtent;
    toFilesize *NextSize;
    QGroupBox *Optimal;
    QGridLayout *gridLayout2;
    QCheckBox *OptimalNull;
    toFilesize *OptimalSize;
    QLabel *TextLabel3;
    QSpinBox *PCTIncrease;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *toStorageDefinitionUI)
    {
    if (toStorageDefinitionUI->objectName().isEmpty())
        toStorageDefinitionUI->setObjectName(QString::fromUtf8("toStorageDefinitionUI"));
    toStorageDefinitionUI->resize(596, 480);
    gridLayout = new QGridLayout(toStorageDefinitionUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    InitialSize = new toFilesize(toStorageDefinitionUI);
    InitialSize->setObjectName(QString::fromUtf8("InitialSize"));

    gridLayout->addWidget(InitialSize, 0, 0, 1, 2);

    GroupBox1 = new QGroupBox(toStorageDefinitionUI);
    GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
    gridLayout1 = new QGridLayout(GroupBox1);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    Line1 = new QFrame(GroupBox1);
    Line1->setObjectName(QString::fromUtf8("Line1"));

    gridLayout1->addWidget(Line1, 0, 1, 3, 1);

    InitialExtent = new QSpinBox(GroupBox1);
    InitialExtent->setObjectName(QString::fromUtf8("InitialExtent"));
    InitialExtent->setMinimum(1);
    InitialExtent->setMaximum(2147483647);
    InitialExtent->setValue(1);

    gridLayout1->addWidget(InitialExtent, 2, 0, 1, 1);

    MaximumExtent = new QSpinBox(GroupBox1);
    MaximumExtent->setObjectName(QString::fromUtf8("MaximumExtent"));
    MaximumExtent->setEnabled(false);
    MaximumExtent->setMinimum(1);
    MaximumExtent->setMaximum(2147483647);
    MaximumExtent->setValue(1);

    gridLayout1->addWidget(MaximumExtent, 2, 2, 1, 1);

    TextLabel1 = new QLabel(GroupBox1);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout1->addWidget(TextLabel1, 1, 2, 1, 1);

    TextLabel2 = new QLabel(GroupBox1);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    TextLabel2->setWordWrap(false);

    gridLayout1->addWidget(TextLabel2, 1, 0, 1, 1);

    UnlimitedExtent = new QCheckBox(GroupBox1);
    UnlimitedExtent->setObjectName(QString::fromUtf8("UnlimitedExtent"));
    UnlimitedExtent->setChecked(true);

    gridLayout1->addWidget(UnlimitedExtent, 0, 2, 1, 1);


    gridLayout->addWidget(GroupBox1, 2, 0, 1, 2);

    NextSize = new toFilesize(toStorageDefinitionUI);
    NextSize->setObjectName(QString::fromUtf8("NextSize"));

    gridLayout->addWidget(NextSize, 1, 0, 1, 2);

    Optimal = new QGroupBox(toStorageDefinitionUI);
    Optimal->setObjectName(QString::fromUtf8("Optimal"));
    gridLayout2 = new QGridLayout(Optimal);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    gridLayout2->setHorizontalSpacing(6);
    gridLayout2->setVerticalSpacing(6);
    gridLayout2->setContentsMargins(11, 11, 11, 11);
    OptimalNull = new QCheckBox(Optimal);
    OptimalNull->setObjectName(QString::fromUtf8("OptimalNull"));
    OptimalNull->setChecked(true);

    gridLayout2->addWidget(OptimalNull, 0, 0, 1, 1);

    OptimalSize = new toFilesize(Optimal);
    OptimalSize->setObjectName(QString::fromUtf8("OptimalSize"));

    gridLayout2->addWidget(OptimalSize, 1, 0, 1, 1);


    gridLayout->addWidget(Optimal, 3, 0, 1, 2);

    TextLabel3 = new QLabel(toStorageDefinitionUI);
    TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
    TextLabel3->setWordWrap(false);

    gridLayout->addWidget(TextLabel3, 4, 0, 1, 1);

    PCTIncrease = new QSpinBox(toStorageDefinitionUI);
    PCTIncrease->setObjectName(QString::fromUtf8("PCTIncrease"));
    PCTIncrease->setMaximum(1000);
    PCTIncrease->setSingleStep(10);

    gridLayout->addWidget(PCTIncrease, 4, 1, 1, 1);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 5, 0, 1, 2);

    TextLabel1->setBuddy(MaximumExtent);
    TextLabel2->setBuddy(InitialSize);
    TextLabel3->setBuddy(PCTIncrease);

    retranslateUi(toStorageDefinitionUI);
    QObject::connect(UnlimitedExtent, SIGNAL(toggled(bool)), MaximumExtent, SLOT(setDisabled(bool)));
    QObject::connect(OptimalNull, SIGNAL(toggled(bool)), OptimalSize, SLOT(setDisabled(bool)));

    QMetaObject::connectSlotsByName(toStorageDefinitionUI);
    } // setupUi

    void retranslateUi(QWidget *toStorageDefinitionUI)
    {
    toStorageDefinitionUI->setWindowTitle(QApplication::translate("toStorageDefinitionUI", "Form1", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    toStorageDefinitionUI->setToolTip(QApplication::translate("toStorageDefinitionUI", "Optimal allocation of extents. Will free unused extents down to specified value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    GroupBox1->setTitle(QApplication::translate("toStorageDefinitionUI", "&Extents", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel1->setToolTip(QApplication::translate("toStorageDefinitionUI", "Maximum number of extents to allocate for an object", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel1->setText(QApplication::translate("toStorageDefinitionUI", "&Maximum extents", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel2->setToolTip(QApplication::translate("toStorageDefinitionUI", "Number of extents to initially allocate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel2->setText(QApplication::translate("toStorageDefinitionUI", "&Initial size", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    UnlimitedExtent->setToolTip(QApplication::translate("toStorageDefinitionUI", "No limit to the number of extents to allocate if needed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    UnlimitedExtent->setText(QApplication::translate("toStorageDefinitionUI", "&Unlimited extents", 0, QApplication::UnicodeUTF8));
    Optimal->setTitle(QApplication::translate("toStorageDefinitionUI", "&Optimal size", 0, QApplication::UnicodeUTF8));
    OptimalNull->setText(QApplication::translate("toStorageDefinitionUI", "&No optimal size", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel3->setToolTip(QApplication::translate("toStorageDefinitionUI", "Default increase in size of next allocated extent. A size of 0 will prevent background coalesce of free space", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel3->setText(QApplication::translate("toStorageDefinitionUI", "&Default PCT increase", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toStorageDefinitionUI);
    } // retranslateUi

};

namespace Ui {
    class toStorageDefinitionUI: public Ui_toStorageDefinitionUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSTORAGEDEFINITIONUI_H
