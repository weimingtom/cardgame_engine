#ifndef CARD_H
#define CARD_H

#include <list>
using namespace std;


enum CardType
{
    Club,
    Diamond,
    Heart,
    Spade
};

enum CardValue
{
    ZERO=0,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ASS

};


class Card
{
public:
    Card(CardType aType,CardValue aValue);

    CardType type() const
    {
        return mType;
    }

    CardValue value() const
    {
        return mValue;
    }

private:
    CardType mType;
    CardValue mValue;

};

typedef list<Card *> CardList;
typedef list<Card *>::iterator CardListIterator;

#endif // CARD_H
