#include "engine.h"

Engine::Engine():mList(0)
{
    init();
}

bool Engine::init()
{
    cout<<"created";
    mList=new CardList;
    CardGenerator::generateAndShuffle(mList);
    CardGenerator::print(mList);
}

Engine::~Engine()
{

}
