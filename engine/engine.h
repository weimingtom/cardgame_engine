#ifndef ENGINE_H
#define ENGINE_H

#include "card.h"
#include "cardgenerator.h"

class Engine
{
public:
    Engine();
    virtual ~Engine();
private:
    bool init();

private:
    CardList *mList;



};

#endif // ENGINE_H
