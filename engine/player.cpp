#include "player.h"

Player::Player(string aName):mName(aName)
{
    mList=new CardList;
}

void Player::addCard(Card *a)
{
    mList->push_back(a);
}
