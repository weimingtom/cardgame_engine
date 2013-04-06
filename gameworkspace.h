#ifndef GAMEWORKSPACE_H
#define GAMEWORKSPACE_H

#include <QMainWindow>
class GameBoard;

class GameWorkspace : public QMainWindow
{
    Q_OBJECT
public:
    explicit GameWorkspace(QWidget *parent = 0);
    
signals:
    
public slots:
private:
    GameBoard *mGameBoard;
};

#endif // GAMEWORKSPACE_H
