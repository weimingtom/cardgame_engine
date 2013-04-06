#ifndef PLAYER_H
#define PLAYER_H

#include"card.h"

class Player
{
public:
    Player(CardList *aList);
    CardList *cards() const
    {
        return mList;
    }
private:
    CardList *mList;
};

#endif // PLAYER_H
