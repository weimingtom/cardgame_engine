#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QWidget>
#include <QLayout>
#include "engine.h"

class GameBoard : public QWidget
{
    Q_OBJECT
public:
    explicit GameBoard(QWidget *parent = 0);
private:
    void generateCards();
signals:
    
public slots:
private:
    Engine *mEngine;
    QLayout *mLayout;
};

#endif // GAMEBOARD_H
