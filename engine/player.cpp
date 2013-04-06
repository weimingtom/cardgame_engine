#include "player.h"

Player::Player(PlayerObserver *observer,string aName):mName(aName),mObserver(observer)
{
    mList=new CardList;
}

void Player::addCard(Card *a)
{
    mList->push_back(a);
}
