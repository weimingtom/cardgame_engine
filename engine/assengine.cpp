#include "assengine.h"

AssEngine::AssEngine():Engine(),mCurPlayer(-1)
{

}
void AssEngine::start()
{
    //divide the cards in to the number of players
    int playerIndex=0;
    for(CardListIterator list_iter = mList->begin();list_iter != mList->end(); list_iter++)
    {
        Card *c=*list_iter;
        std::cout << c->value()<<","<<c->type()<<endl;
        if(playerIndex>=mPlayerCount)
        {
            playerIndex=0;
        }
        Player *p=mPlayers->at(playerIndex);
        p->addCard(c);
        playerIndex++;
    }
    mCurPlayer=0;
    Player *p=mPlayers->at(mCurPlayer);
    p->onTurn();
}

void AssEngine::played(Card *aCard)
{
    //keep the card to the used bin

    mCurPlayer++;
    if(mCurPlayer>=mPlayerCount)
    {
        mCurPlayer=0;
    }
    Player *p1=mPlayers->at(mCurPlayer);
    p1->onTurn();

}
