#ifndef ASSENGINE_H
#define ASSENGINE_H

#include "engine.h"

class AssEngine : public Engine
{
public:
    AssEngine();
    void start();
    void played(Card *aCard);
private:

    int mCurPlayer;
};

#endif // ASSENGINE_H
