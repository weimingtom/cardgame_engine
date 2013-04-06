#include "carddeck.h"
#include "cardwidget.h"
#include<QHBoxLayout>


CardDeck::CardDeck(Player *aPlayer,bool isOwn,QWidget *parent) :
    QWidget(parent),mHuman(isOwn)
{

    mPlayer=aPlayer;

    mLayout=new QHBoxLayout(this);
    mNameLabel=new QLabel(this);
    mNameLabel->setText(mPlayer->name().c_str());
    generateCards();
    setLayout(mLayout);

}

void CardDeck::generateCards()
{
    mLayout->addWidget(mNameLabel);
    for(int i=0;i<mPlayer->cards()->size();i++)
     {
         CardWidget *card=new CardWidget(mPlayer->cards()->at(i),this);
         mLayout->addWidget(card);
     }

}
