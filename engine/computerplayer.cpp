#include "computerplayer.h"

ComputerPlayer::ComputerPlayer(PlayerObserver *observer,string aName):Player(observer,aName)
{
}

void ComputerPlayer::onTurn()
{
    cout<<name()<<" : MyTurn and I am a computer"<<endl;
    if(mObserver)
        mObserver->played(0);
}
