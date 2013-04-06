#include "gameboard.h"
#include "cardwidget.h"
#include<QHBoxLayout>

GameBoard::GameBoard(QWidget *parent) :
    QWidget(parent)
{
    mEngine=new Engine();
    mLayout=new QHBoxLayout(this);
  //  generateCards();
    setLayout(mLayout);
}

void GameBoard::generateCards()
{
    //for(int i=0;i<mEngine->cards()->size();i++)
   // {
   //     CardWidget *card=new CardWidget(mEngine->cardAt(i),this);
   //     mLayout->addWidget(card);
   // }
}
