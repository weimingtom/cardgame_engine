#include <QtGui/QApplication>
#include "gameworkspace.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GameWorkspace workspace;
    //workspace.showMaximized();

    
    return a.exec();
}
