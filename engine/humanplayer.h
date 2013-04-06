#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include "player.h"

class HumanPlayer : public Player
{
public:
    HumanPlayer(string aName);
    void onTurn();
};

#endif // HUMANPLAYER_H
