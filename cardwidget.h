#ifndef CARDWIDGET_H
#define CARDWIDGET_H

#include <QWidget>
#include "card.h"



class CardWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CardWidget(Card *aC,QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
private:
    void generateGraphics();
    
signals:
    
public slots:

private:
    Card *mCard;
    QImage *mImage;
    
};

#endif // CARDWIDGET_H
