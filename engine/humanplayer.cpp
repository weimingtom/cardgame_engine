#include "humanplayer.h"

HumanPlayer::HumanPlayer(string aName):Player(aName)
{

}

void HumanPlayer::onTurn()
{
       cout<<name()<<"MyTurn and I am a human"<<endl;
}
