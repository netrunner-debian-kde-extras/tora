/********************************************************************************
** Form generated from reading ui file 'tobrowserindexui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOBROWSERINDEXUI_H
#define UI_TOBROWSERINDEXUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include "toresultcols.h"
#include "totableselect.h"

QT_BEGIN_NAMESPACE

class Ui_toBrowserIndexUI
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel1;
    QToolButton *toolButton2;
    QToolButton *toolButton3;
    QLineEdit *Cols;
    QToolButton *ToolButton1;
    QComboBox *Name;
    QComboBox *Type;
    QLabel *TextLabel2;
    QLabel *textLabel1;
    toResultCols *ColList;
    QPushButton *PushButton2;
    QSpacerItem *Spacer2;
    QPushButton *PushButton1;
    toTableSelect *TableSelect;

    void setupUi(QDialog *toBrowserIndexUI)
    {
    if (toBrowserIndexUI->objectName().isEmpty())
        toBrowserIndexUI->setObjectName(QString::fromUtf8("toBrowserIndexUI"));
    toBrowserIndexUI->resize(588, 628);
    gridLayout = new QGridLayout(toBrowserIndexUI);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    TextLabel1 = new QLabel(toBrowserIndexUI);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(TextLabel1->sizePolicy().hasHeightForWidth());
    TextLabel1->setSizePolicy(sizePolicy);
    TextLabel1->setWordWrap(false);

    hboxLayout->addWidget(TextLabel1);

    toolButton2 = new QToolButton(toBrowserIndexUI);
    toolButton2->setObjectName(QString::fromUtf8("toolButton2"));
    toolButton2->setIcon(qt_get_icon(image0_ID));

    hboxLayout->addWidget(toolButton2);

    toolButton3 = new QToolButton(toBrowserIndexUI);
    toolButton3->setObjectName(QString::fromUtf8("toolButton3"));
    toolButton3->setIcon(qt_get_icon(image1_ID));

    hboxLayout->addWidget(toolButton3);


    gridLayout->addLayout(hboxLayout, 1, 0, 1, 4);

    Cols = new QLineEdit(toBrowserIndexUI);
    Cols->setObjectName(QString::fromUtf8("Cols"));

    gridLayout->addWidget(Cols, 6, 0, 1, 4);

    ToolButton1 = new QToolButton(toBrowserIndexUI);
    ToolButton1->setObjectName(QString::fromUtf8("ToolButton1"));
    ToolButton1->setFocusPolicy(Qt::StrongFocus);
    ToolButton1->setIcon(qt_get_icon(image2_ID));

    gridLayout->addWidget(ToolButton1, 8, 0, 1, 1);

    Name = new QComboBox(toBrowserIndexUI);
    Name->setObjectName(QString::fromUtf8("Name"));

    gridLayout->addWidget(Name, 2, 0, 1, 4);

    Type = new QComboBox(toBrowserIndexUI);
    Type->setObjectName(QString::fromUtf8("Type"));

    gridLayout->addWidget(Type, 4, 0, 1, 4);

    TextLabel2 = new QLabel(toBrowserIndexUI);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    TextLabel2->setWordWrap(false);

    gridLayout->addWidget(TextLabel2, 5, 0, 1, 4);

    textLabel1 = new QLabel(toBrowserIndexUI);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setWordWrap(false);

    gridLayout->addWidget(textLabel1, 3, 0, 1, 4);

    ColList = new toResultCols(toBrowserIndexUI);
    ColList->setObjectName(QString::fromUtf8("ColList"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(7));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(ColList->sizePolicy().hasHeightForWidth());
    ColList->setSizePolicy(sizePolicy1);
    ColList->setFocusPolicy(Qt::StrongFocus);

    gridLayout->addWidget(ColList, 7, 0, 1, 4);

    PushButton2 = new QPushButton(toBrowserIndexUI);
    PushButton2->setObjectName(QString::fromUtf8("PushButton2"));

    gridLayout->addWidget(PushButton2, 8, 3, 1, 1);

    Spacer2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(Spacer2, 8, 1, 1, 1);

    PushButton1 = new QPushButton(toBrowserIndexUI);
    PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
    PushButton1->setDefault(true);

    gridLayout->addWidget(PushButton1, 8, 2, 1, 1);

    TableSelect = new toTableSelect(toBrowserIndexUI);
    TableSelect->setObjectName(QString::fromUtf8("TableSelect"));

    gridLayout->addWidget(TableSelect, 0, 0, 1, 4);

    TextLabel1->setBuddy(Name);
    TextLabel2->setBuddy(Cols);
    QWidget::setTabOrder(Name, Type);
    QWidget::setTabOrder(Type, Cols);
    QWidget::setTabOrder(Cols, ColList);
    QWidget::setTabOrder(ColList, ToolButton1);
    QWidget::setTabOrder(ToolButton1, PushButton1);
    QWidget::setTabOrder(PushButton1, PushButton2);

    retranslateUi(toBrowserIndexUI);
    QObject::connect(PushButton1, SIGNAL(clicked()), toBrowserIndexUI, SLOT(accept()));
    QObject::connect(PushButton2, SIGNAL(clicked()), toBrowserIndexUI, SLOT(reject()));
    QObject::connect(ToolButton1, SIGNAL(clicked()), toBrowserIndexUI, SLOT(displaySQL()));
    QObject::connect(toolButton2, SIGNAL(clicked()), toBrowserIndexUI, SLOT(addIndex()));
    QObject::connect(toolButton3, SIGNAL(clicked()), toBrowserIndexUI, SLOT(delIndex()));
    QObject::connect(Name, SIGNAL(activated(int)), toBrowserIndexUI, SLOT(changeIndex()));

    QMetaObject::connectSlotsByName(toBrowserIndexUI);
    } // setupUi

    void retranslateUi(QDialog *toBrowserIndexUI)
    {
    toBrowserIndexUI->setWindowTitle(QApplication::translate("toBrowserIndexUI", "Index name", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("toBrowserIndexUI", "&Name", 0, QApplication::UnicodeUTF8));
    toolButton2->setText(QString());
    toolButton3->setText(QString());
    ToolButton1->setText(QString());

#ifndef QT_NO_TOOLTIP
    ToolButton1->setProperty("toolTip", QVariant(QApplication::translate("toBrowserIndexUI", "Display SQL to create this constraint", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP

    Type->insertItems(0, QStringList()
     << QApplication::translate("toBrowserIndexUI", "Normal Index", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toBrowserIndexUI", "Unique Index", 0, QApplication::UnicodeUTF8)
    );
    TextLabel2->setText(QApplication::translate("toBrowserIndexUI", "&Columns", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("toBrowserIndexUI", "Type", 0, QApplication::UnicodeUTF8));
    PushButton2->setText(QApplication::translate("toBrowserIndexUI", "Cancel", 0, QApplication::UnicodeUTF8));
    PushButton1->setText(QApplication::translate("toBrowserIndexUI", "&Ok", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toBrowserIndexUI);
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        image1_ID,
        image2_ID,
        image3_ID,
        image4_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    static const char* const image0_data[] = { 
"16 16 3 1",
". c None",
"# c #000000",
"a c #00ff00",
"..........###...",
"..........#a#...",
"..........#a#...",
".......####a####",
".......#aaaaaaa#",
".......####a####",
"..........#a#...",
"..........#a#...",
"..........###...",
"................",
"................",
"................",
"................",
"................",
"................",
"................"};


    static const char* const image1_data[] = { 
"16 16 3 1",
". c None",
"# c #000000",
"a c #ff0000",
"................",
"................",
"................",
".......#########",
".......#aaaaaaa#",
".......#########",
"................",
"................",
"................",
"................",
"................",
"................",
"................",
"................",
"................",
"................"};


    static const char* const image2_data[] = { 
"16 16 14 1",
". c None",
"# c #000000",
"i c #181841",
"e c #20205a",
"k c #202462",
"c c #292873",
"l c #292c7b",
"h c #313083",
"b c #393cac",
"d c #4140b4",
"f c #4a4ccd",
"j c #5a59f6",
"g c #5a5df6",
"a c #5a5dff",
"................",
".###..###..##...",
"#..#.#..#..#....",
"##...#...#.#....",
"..#..#####.#....",
"...#.#aab#.#....",
"#..##cdaef##..#.",
".##.#ghiha#####.",
"....#aajkl#.....",
".....#aaa#......",
"......#####.....",
".........###....",
"..........###...",
"...........##...",
"................",
"................"};


    static const char* const image3_data[] = { 
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


    static const char* const image4_data[] = { 
"22 22 233 2",
"Qt c None",
".# c #000000",
".o c #000000",
".a c #000000",
".b c #000000",
".c c #000000",
".d c #000000",
".e c #000000",
".f c #7b7b7b",
".X c #000000",
".F c #000000",
".n c #000000",
"#n c #000000",
"#C c #000000",
"#Q c #000000",
".W c #000000",
"#a c #000000",
"#m c #000000",
"#B c #000000",
"#P c #000000",
"bM c #000000",
".g c #a1a1a1",
".m c #060606",
".E c #000000",
"bL c #000000",
".h c #939393",
".l c #383838",
".V c #000000",
"bx c #000000",
"## c #000000",
".4 c #020202",
"#y c #020204",
"#q c #020206",
"#p c #020208",
"#d c #02020a",
".3 c #02020c",
".5 c #02020d",
"aU c #040202",
"au c #040206",
"#S c #04020c",
"aV c #040404",
"aN c #04040c",
"#x c #04040d",
"a6 c #08060c",
"aG c #0a0808",
"#e c #0d0f10",
"#T c #101012",
"aF c #101213",
"ap c #121212",
"bd c #13150c",
"aH c #13150d",
"#9 c #151612",
"aT c #151812",
"bf c #151d0f",
"bK c #161904",
"#M c #161912",
"an c #161c13",
"#h c #181c13",
"aq c #1a1a16",
"bc c #1a1c10",
"ag c #1c1d16",
"ar c #1c2210",
"aE c #1c2212",
"be c #1e2513",
"ay c #212616",
"a7 c #222715",
".6 c #222815",
"#0 c #282d13",
"a2 c #283015",
"#D c #2a2f13",
"bw c #2a3107",
"bJ c #2a3108",
".2 c #2b3115",
"#8 c #2b3315",
"#X c #2c321a",
"#4 c #2f331a",
"#f c #2f3418",
"ad c #313918",
"#g c #313a19",
".D c #374109",
"at c #383f19",
"a5 c #383f1a",
"#Y c #404c18",
"aB c #424e19",
"#E c #454e1c",
"#r c #454f1d",
".U c #4c590c",
"#i c #4f5b1d",
"a1 c #50591d",
"a3 c #505b1d",
"a# c #505c1d",
"ao c #516120",
"bz c #525f0f",
"#l c #52600d",
"a4 c #53611e",
"bA c #53620d",
"by c #53620e",
"aj c #536221",
"#J c #53631e",
"#. c #54620e",
"bh c #55630e",
"bI c #556310",
"bB c #56640f",
"aW c #566520",
"#O c #57650f",
"bC c #59680f",
"#c c #59681c",
"#2 c #5a690f",
"az c #5a6922",
"bD c #5b6a10",
"#w c #5b6a22",
"ab c #5b6b11",
"ak c #5c6a22",
"bE c #5d6c13",
"aY c #5d6d0e",
"bG c #5d6d10",
"al c #5d6d13",
"bp c #5e6a22",
"aa c #5e6b1e",
"aJ c #5e6d0f",
"bF c #5e6d11",
".k c #5f5f5f",
"bo c #5f6a20",
"aw c #5f6e11",
"bH c #617110",
"a9 c #617210",
"#L c #647322",
"aO c #647423",
"#3 c #64761a",
"ac c #657420",
".N c #657520",
".M c #65761a",
"bb c #667227",
"#z c #667326",
".7 c #677922",
"aM c #6a7622",
".j c #6d6d6d",
"#o c #6e7d20",
".1 c #6e7d21",
"bn c #768822",
"am c #768921",
"bq c #778728",
"#1 c #778823",
"av c #778828",
"#R c #778921",
".O c #778925",
".L c #778a21",
"aC c #788925",
".i c #7a7a7a",
".Z c #88a213",
"#s c #899c20",
"#b c #89a016",
".I c #89a018",
"af c #8ca326",
".H c #8da321",
".K c #8da41e",
"#I c #8da426",
"aS c #8fa332",
"as c #8fa431",
"aD c #90a42c",
"ah c #90a62a",
".J c #90a916",
".0 c #90a91c",
"ax c #91a91d",
".P c #91aa1e",
"#W c #91aa22",
"#7 c #92a926",
"bg c #92ab29",
"bu c #92ab2a",
".C c #94a53e",
"bv c #96af1d",
"#v c #96b028",
"aZ c #97b01a",
".R c #97b119",
"bi c #97b11a",
".S c #97b21a",
"bt c #97b22a",
".T c #98b11a",
"a8 c #98b22b",
"#G c #99b415",
"#U c #99b512",
"#5 c #9ab121",
"#t c #9ab221",
"bm c #9bb028",
"#F c #9bb322",
"bj c #9bb51c",
"aL c #9cb51a",
".Q c #9cb61a",
".9 c #9cb71a",
"#N c #9db12a",
"b# c #9db519",
"#V c #9db815",
"#6 c #9db915",
"ae c #9db91e",
".8 c #9eb825",
"#H c #9eba13",
"#u c #9eba1e",
".G c #9fb046",
"aA c #9fb92b",
"bk c #9fba1d",
"br c #a0b827",
"#K c #a0ba2c",
"#k c #a0bb19",
"a0 c #a1b425",
"aI c #a1b927",
"ba c #a1ba21",
"#j c #a1bb20",
"aP c #a3bd2c",
"#Z c #a3bd2d",
"bl c #a9c223",
"#A c #aac428",
"aQ c #adcb22",
"a. c #aecc25",
".s c #afbe63",
".t c #b0bf64",
".u c #b1c164",
"aR c #b2d41d",
"ai c #b2d420",
".r c #b4c170",
"b. c #b4c55d",
".B c #b4c65d",
".Y c #b5c170",
".v c #b5c564",
".q c #b7c18b",
"aK c #b7c664",
".z c #b7c764",
".w c #b7c765",
".A c #b7c865",
".p c #b8bca7",
".y c #b8c865",
".x c #b8c965",
"bs c #bdde25",
"aX c #bede23",
"QtQtQt.#.a.b.c.d.e.e.e.e.e.e.e.e.d.c.b.a.#Qt",
"QtQt.f.g.h.i.j.j.j.j.j.j.j.j.j.j.k.l.m.n.c.o",
"Qt.#.g.p.q.r.s.t.u.v.w.x.y.z.z.A.B.C.D.E.F.c",
"Qt.a.h.q.G.H.I.J.K.L.M.N.O.P.Q.R.S.T.U.V.W.X",
"Qt.b.i.Y.H.Z.0.1.2.3.4.4.5.6.7.8.9.Q#.###a.n",
"Qt.c.j.s#b.0#c#d.3#e#f#g#h.3#d#i#j#k#l###m#n",
"Qt.d.j.t.J#o#p#q#r#s#t#u#v#w#x#y#z#A#.###B#C",
"Qt.e.j.u.K#D#y#E#F#G#H#I#J#K#L#p#M#N#O###P#Q",
"Qt.e.j.v#R#S#T#s#U#V#W#X#p#Y#Z#0#y#1#2###P#Q",
"Qt.e.j.w#3#y#4#5#6#7#8#p#9.Oa.a##yaaab###P#Q",
"Qt.e.j.yac.4adaeaf#X#p#qagahaiaj#yakal###P#Q",
"Qt.e.j.xam.5an#vao#papaq#qarasatauavaw###P#Q",
"Qt.e.j.waxay.3azaAaBaCaDaE.4aFaGaHaIaJ###P#Q",
"Qt.e.jaKaLaM.3aNaOaPaQaRaSaTaUaVaWaXaY###P#Q",
"Qt.e.j.waZa0a1.4#da2a3a4a5a6aVaVa7a8a9###P#Q",
"Qt.d.kb..Rb#babbbc#q#y.4#ybdaWbebfbgbh###B#C",
"Qt.c.l.Cbibjbkblbmbnbobpbqbrbsbtbubvbwbx#m#n",
"Qt.b.m.D.UbybzbAbBbCbDbEbFbGaYbHbIbJbKbL#a.n",
"Qt.a.n.E.V########################bxbLbM.W.X",
"Qt.#.c.F.W#a#m#B#P#P#P#P#P#P#P#P#B#m#a.W.F.c",
"QtQt.o.c.X.n#n#C#Q#Q#Q#Q#Q#Q#Q#Q#C#n.n.X.c.o",
"QtQtQt.#.a.b.c.d.e.e.e.e.e.e.e.e.d.c.b.a.#Qt"};


    switch (id) {
        case image0_ID: return QPixmap((const char**)image0_data);
        case image1_ID: return QPixmap((const char**)image1_data);
        case image2_ID: return QPixmap((const char**)image2_data);
        case image3_ID: return QPixmap((const char**)image3_data);
        case image4_ID: return QPixmap((const char**)image4_data);
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class toBrowserIndexUI: public Ui_toBrowserIndexUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOBROWSERINDEXUI_H
