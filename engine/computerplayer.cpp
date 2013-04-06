#include "computerplayer.h"

ComputerPlayer::ComputerPlayer(string aName):Player(aName)
{
}

void ComputerPlayer::onTurn()
{
    cout<<name()<<"MyTurn and I am a computer"<<endl;
}
