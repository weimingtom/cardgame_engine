#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QWidget>
#include<QMap>
#include <QLayout>
#include<QLabel>
#include "player.h"


class CardDeck : public QWidget
{
    Q_OBJECT
public:
    explicit CardDeck(Player *p,bool isOwn=false,QWidget *parent = 0);
private:
    void generateCards();
signals:
    
public slots:

private:
    QLabel *mNameLabel;
    QLayout *mLayout;
    Player *mPlayer;
    bool mHuman;

};

#endif // GAMEBOARD_H
