#ifndef PLAYER_H
#define PLAYER_H

#include"card.h"
#include <vector>
#include<iostream>
using namespace std;

class PlayerObserver
{
public:
    virtual void played(Card *aCard)=0;
};

class Player
{
public:
    Player(string name);
    virtual void onTurn()=0;
    void addCard(Card *a);
    void removeCard(Card *a);
    CardList *cards() const
    {
        return mList;
    }

    string name() const
    {
        return mName;
    }

    void setEngine(PlayerObserver *observer)
    {
        mObserver=observer;
    }

protected:
    CardList *mList;
    string mName;
    PlayerObserver *mObserver;
};


typedef vector<Player *> PlayerList;
typedef vector<Player *>::iterator PlayerListIterator;

#endif // PLAYER_H
