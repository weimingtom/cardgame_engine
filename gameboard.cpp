#include "gameboard.h"
#include "cardwidget.h"
#include<QHBoxLayout>
#include "assengine.h"

#include "humanplayer.h"
#include "computerplayer.h"

GameBoard::GameBoard(QWidget *parent) :
    QWidget(parent)
{
    mEngine=new AssEngine();



    HumanPlayer *player=new HumanPlayer("poornima menon");
    player->setEngine(mEngine);
    ComputerPlayer *cPlayer1=new ComputerPlayer("mark zuker");
    cPlayer1->setEngine(mEngine);
    ComputerPlayer *cPlayer2=new ComputerPlayer("gokul kartha");
    cPlayer2->setEngine(mEngine);
    ComputerPlayer *cPlayer3=new ComputerPlayer("rahul madhav");
    cPlayer3->setEngine(mEngine);
    mPlayers.insert(QString(player->name().c_str()),player);
    mPlayers.insert(QString(cPlayer1->name().c_str()),cPlayer1);
    mPlayers.insert(QString(cPlayer2->name().c_str()),cPlayer1);
    mPlayers.insert(QString(cPlayer3->name().c_str()),cPlayer3);

    mEngine->addPlayer(player);
    mEngine->addPlayer(cPlayer1);
    mEngine->addPlayer(cPlayer2);
    mEngine->addPlayer(cPlayer3);

    mEngine->start();

    mLayout=new QHBoxLayout(this);
    generateCards();
    setLayout(mLayout);

}

void GameBoard::generateCards()
{
    for(int i=0;i<mPlayers["poornima menon"]->cards()->size();i++)
     {
         CardWidget *card=new CardWidget(mPlayers["poornima menon"]->cards()->at(i),this);
         mLayout->addWidget(card);
     }
}
