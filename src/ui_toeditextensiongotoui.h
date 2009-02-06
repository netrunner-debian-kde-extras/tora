/********************************************************************************
** Form generated from reading ui file 'toeditextensiongotoui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOEDITEXTENSIONGOTOUI_H
#define UI_TOEDITEXTENSIONGOTOUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_toEditExtensionGotoUI
{
public:
    QGridLayout *gridLayout;
    QSpinBox *Line;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacer1;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QSpacerItem *spacer2;
    QLabel *textLabel1;

    void setupUi(QDialog *todebuggotolineUI)
    {
    if (todebuggotolineUI->objectName().isEmpty())
        todebuggotolineUI->setObjectName(QString::fromUtf8("todebuggotolineUI"));
    todebuggotolineUI->resize(224, 117);
    gridLayout = new QGridLayout(todebuggotolineUI);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    Line = new QSpinBox(todebuggotolineUI);
    Line->setObjectName(QString::fromUtf8("Line"));

    gridLayout->addWidget(Line, 0, 1, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacer1 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacer1);

    pushButton1 = new QPushButton(todebuggotolineUI);
    pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
    pushButton1->setDefault(true);

    hboxLayout->addWidget(pushButton1);

    pushButton2 = new QPushButton(todebuggotolineUI);
    pushButton2->setObjectName(QString::fromUtf8("pushButton2"));

    hboxLayout->addWidget(pushButton2);


    gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

    spacer2 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacer2, 1, 1, 1, 1);

    textLabel1 = new QLabel(todebuggotolineUI);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setWordWrap(false);

    gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

    QWidget::setTabOrder(Line, pushButton1);
    QWidget::setTabOrder(pushButton1, pushButton2);

    retranslateUi(todebuggotolineUI);
    QObject::connect(pushButton1, SIGNAL(clicked()), todebuggotolineUI, SLOT(accept()));
    QObject::connect(pushButton2, SIGNAL(clicked()), todebuggotolineUI, SLOT(reject()));

    QMetaObject::connectSlotsByName(todebuggotolineUI);
    } // setupUi

    void retranslateUi(QDialog *todebuggotolineUI)
    {
    todebuggotolineUI->setWindowTitle(QApplication::translate("toEditExtensionGotoUI", "Go to line", 0, QApplication::UnicodeUTF8));
    pushButton1->setText(QApplication::translate("toEditExtensionGotoUI", "&Ok", 0, QApplication::UnicodeUTF8));
    pushButton2->setText(QApplication::translate("toEditExtensionGotoUI", "&Cancel", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("toEditExtensionGotoUI", "Line Number", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(todebuggotolineUI);
    } // retranslateUi

};

namespace Ui {
    class toEditExtensionGotoUI: public Ui_toEditExtensionGotoUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOEDITEXTENSIONGOTOUI_H
