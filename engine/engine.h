#ifndef ENGINE_H
#define ENGINE_H

#include "card.h"
#include "cardgenerator.h"
#include "player.h"


class Engine:public PlayerObserver
{
public:
    Engine();
    virtual ~Engine();

    virtual void start()=0;

    void addPlayer(Player *p);

    virtual void played(Card *aCard)=0;

private:
    bool init();

protected:
    CardList *mList;
    PlayerList *mPlayers;
        int mPlayerCount;
};

#endif // ENGINE_H
