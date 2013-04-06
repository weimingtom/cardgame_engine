#ifndef CARDWIDGET_H
#define CARDWIDGET_H

#include <QWidget>
#include "card.h"



class CardWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CardWidget(Card *aC,bool showIt=false,QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void resizeEvent(QResizeEvent *);
    void showIt();
private:
    void generateGraphics();
    
signals:
    
public slots:

private:
    Card *mCard;
    QImage *mImage;
    bool mShow;
    
};

#endif // CARDWIDGET_H
