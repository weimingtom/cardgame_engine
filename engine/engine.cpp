#include "engine.h"

Engine::Engine():mList(0),mPlayerCount(0)
{
    init();
}

bool Engine::init()
{
    mList=new CardList;
    CardGenerator::generateAndShuffle(mList);
    CardGenerator::print(mList);

    mPlayers=new PlayerList;
}

void Engine::addPlayer(Player *p)
{
    mPlayerCount++;
    mPlayers->push_back(p);
}

Engine::~Engine()
{

}
