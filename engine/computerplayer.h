#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

#include "player.h"

class ComputerPlayer : public Player
{
public:
    ComputerPlayer(PlayerObserver *observer,string aName);
    void onTurn();
};

#endif // COMPUTERPLAYER_H
