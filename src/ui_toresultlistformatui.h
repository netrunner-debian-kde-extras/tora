/********************************************************************************
** Form generated from reading ui file 'toresultlistformatui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TORESULTLISTFORMATUI_H
#define UI_TORESULTLISTFORMATUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_toResultListFormatUI
{
public:
    QGridLayout *gridLayout;
    QPushButton *PushButton2;
    QPushButton *PushButton1;
    QComboBox *Format;
    QLabel *TextLabel1;
    QLineEdit *Separator;
    QLabel *TextLabel1_2;
    QLabel *TextLabel2;
    QLineEdit *Delimiter;
    QSpacerItem *Spacer2;
    QSpacerItem *Spacer1;

    void setupUi(QDialog *toResultListFormatUI)
    {
    if (toResultListFormatUI->objectName().isEmpty())
        toResultListFormatUI->setObjectName(QString::fromUtf8("toResultListFormatUI"));
    toResultListFormatUI->resize(356, 199);
    gridLayout = new QGridLayout(toResultListFormatUI);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    PushButton2 = new QPushButton(toResultListFormatUI);
    PushButton2->setObjectName(QString::fromUtf8("PushButton2"));

    gridLayout->addWidget(PushButton2, 5, 2, 1, 1);

    PushButton1 = new QPushButton(toResultListFormatUI);
    PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
    PushButton1->setDefault(true);

    gridLayout->addWidget(PushButton1, 5, 1, 1, 1);

    Format = new QComboBox(toResultListFormatUI);
    Format->setObjectName(QString::fromUtf8("Format"));

    gridLayout->addWidget(Format, 1, 0, 1, 3);

    TextLabel1 = new QLabel(toResultListFormatUI);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(TextLabel1->sizePolicy().hasHeightForWidth());
    TextLabel1->setSizePolicy(sizePolicy);
    TextLabel1->setWordWrap(false);

    gridLayout->addWidget(TextLabel1, 0, 0, 1, 3);

    Separator = new QLineEdit(toResultListFormatUI);
    Separator->setObjectName(QString::fromUtf8("Separator"));

    gridLayout->addWidget(Separator, 3, 0, 1, 1);

    TextLabel1_2 = new QLabel(toResultListFormatUI);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setWordWrap(false);

    gridLayout->addWidget(TextLabel1_2, 2, 0, 1, 1);

    TextLabel2 = new QLabel(toResultListFormatUI);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    TextLabel2->setWordWrap(false);

    gridLayout->addWidget(TextLabel2, 2, 1, 1, 2);

    Delimiter = new QLineEdit(toResultListFormatUI);
    Delimiter->setObjectName(QString::fromUtf8("Delimiter"));

    gridLayout->addWidget(Delimiter, 3, 1, 1, 2);

    Spacer2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(Spacer2, 4, 0, 1, 1);

    Spacer1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(Spacer1, 5, 0, 1, 1);

    TextLabel1->setBuddy(Format);
    QWidget::setTabOrder(Format, Separator);
    QWidget::setTabOrder(Separator, Delimiter);
    QWidget::setTabOrder(Delimiter, PushButton1);
    QWidget::setTabOrder(PushButton1, PushButton2);

    retranslateUi(toResultListFormatUI);
    QObject::connect(PushButton1, SIGNAL(clicked()), toResultListFormatUI, SLOT(accept()));
    QObject::connect(PushButton2, SIGNAL(clicked()), toResultListFormatUI, SLOT(reject()));
    QObject::connect(Format, SIGNAL(activated(int)), toResultListFormatUI, SLOT(formatChanged(int)));

    QMetaObject::connectSlotsByName(toResultListFormatUI);
    } // setupUi

    void retranslateUi(QDialog *toResultListFormatUI)
    {
    toResultListFormatUI->setWindowTitle(QApplication::translate("toResultListFormatUI", "Choose format", 0, QApplication::UnicodeUTF8));
    PushButton2->setText(QApplication::translate("toResultListFormatUI", "Cancel", 0, QApplication::UnicodeUTF8));
    PushButton1->setText(QApplication::translate("toResultListFormatUI", "&Ok", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("toResultListFormatUI", "&Choose format of exported file.", 0, QApplication::UnicodeUTF8));
    TextLabel1_2->setText(QApplication::translate("toResultListFormatUI", "Separator", 0, QApplication::UnicodeUTF8));
    TextLabel2->setText(QApplication::translate("toResultListFormatUI", "Delimiter", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toResultListFormatUI);
    } // retranslateUi

};

namespace Ui {
    class toResultListFormatUI: public Ui_toResultListFormatUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TORESULTLISTFORMATUI_H
