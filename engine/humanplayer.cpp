#include "humanplayer.h"


HumanPlayer::HumanPlayer(PlayerObserver *observer,string aName):Player(observer,aName)
{

}

void HumanPlayer::onTurn()
{
    cout<<name()<<" : MyTurn and I am a human"<<endl;
  //  if(mObserver)
  //      mObserver->played(0);
}
