#include "gameworkspace.h"
#include "carddeck.h"
#include "assengine.h"
#include "humanplayer.h"
#include "computerplayer.h"

GameWorkspace::GameWorkspace(QWidget *parent) :
    QMainWindow(parent)
{
    //mGameBoard=new GameBoard(this);
    // mGameBoard->resize(1400,300);

    mCentralWidget=new QWidget();
    setCentralWidget(mCentralWidget);
    mLayout=new QGridLayout(this);
    mCentralWidget->setLayout(mLayout);
    createEngineAndPlayers();



}
void GameWorkspace::createEngineAndPlayers()
{
    mEngine=new AssEngine();

    HumanPlayer *player=new HumanPlayer(mEngine,"poornima menon");
    ComputerPlayer *cPlayer1=new ComputerPlayer(mEngine,"mark zuker");
    ComputerPlayer *cPlayer2=new ComputerPlayer(mEngine,"gokul kartha");;
    ComputerPlayer *cPlayer3=new ComputerPlayer(mEngine,"rahul madhav");

       mEngine->addPlayer(player);

       mEngine->addPlayer(cPlayer1);

            mEngine->addPlayer(cPlayer2);

            mEngine->addPlayer(cPlayer3);
    mEngine->start();

    initDeckForPlayer(player);
    initDeckForPlayer(cPlayer1);
    initDeckForPlayer(cPlayer2);
    initDeckForPlayer(cPlayer3);


}

void GameWorkspace::initDeckForPlayer(Player *p,bool itsme)
{
    CardDeck *player=new CardDeck(p,true,this);
    mPlayers.insert(QString(p->name().c_str()),player);
    //setCentralWidget(player);
    mLayout->addWidget(player,mPlayers.count(),0);


}

