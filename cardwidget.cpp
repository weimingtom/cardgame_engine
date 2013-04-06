#include "cardwidget.h"
#include <QPainter>
#include<QDebug>
#include<QApplication>

CardWidget::CardWidget(Card *aC,QWidget *parent) :
    QWidget(parent),mCard(aC)
{
    generateGraphics();
    update();
}
void CardWidget::generateGraphics()
{
    QString directory;
    QString suffix;
    QString prefix;
    switch(mCard->type())
    {
    case Club:
        directory="clubs";
        break;
    case Heart:
        directory="hearts";

        break;
    case Diamond:
        directory="diamonds";

        break;
    case Spade:
        directory="spades";
        break;
    default:
        directory=" ";
        break;
    }
    suffix=directory[0].toUpper();

    switch(mCard->value())
    {
    case Two:
        prefix="2";
        break;
    case Three:
        prefix="3";
        break;
    case Four:
        prefix="4";
        break;
    case Five:
        prefix="5";
        break;
    case Six:
        prefix="6";
        break;
    case Seven:
        prefix="7";
        break;
    case Eight:
        prefix="8";
        break;
    case Nine:
        prefix="9";
        break;
    case Ten:
        prefix="10";
        break;
    case Jack:
        prefix="J";
        break;
    case Queen:
        prefix="Q";
        break;
    case King:
        prefix="K";
        break;
    case Ass:
        prefix="A";
        break;
    default:
        prefix=" ";
        break;
    }
    QString fileName=QApplication::applicationDirPath()+QString("/gfx/cards/")+directory+QString("/")+prefix+suffix+QString(".svg");
   // qDebug()<<fileName;
    mImage=new QImage(fileName);
}

void CardWidget::paintEvent(QPaintEvent *e)
{
    QPainter p(this);
    p.drawImage(rect(),*mImage);
}
