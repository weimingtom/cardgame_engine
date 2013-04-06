#include "gameworkspace.h"
#include "gameboard.h"

GameWorkspace::GameWorkspace(QWidget *parent) :
    QMainWindow(parent)
{
    mGameBoard=new GameBoard(this);
    mGameBoard->resize(1400,300);

}
