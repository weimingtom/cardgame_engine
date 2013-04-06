#ifndef GAMEWORKSPACE_H
#define GAMEWORKSPACE_H

#include <QMainWindow>
#include "engine.h"
#include <QMap>
#include <QGridLayout>

class CardDeck;

class GameWorkspace : public QMainWindow
{
    Q_OBJECT
public:
    explicit GameWorkspace(QWidget *parent = 0);

private:
    void createEngineAndPlayers();
    void initDeckForPlayer(Player *p,bool itsme=false);
    
signals:
    
public slots:
private:
    //GameBoard *mGameBoard;
    Engine *mEngine;
    QMap<QString,CardDeck*> mPlayers;

    QWidget *mCentralWidget;
    QGridLayout *mLayout;
};

#endif // GAMEWORKSPACE_H
