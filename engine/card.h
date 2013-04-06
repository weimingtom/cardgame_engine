#ifndef CARD_H
#define CARD_H

#include <vector>
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
    Two=0,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    Ass

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

typedef vector<Card *> CardList;
typedef vector<Card *>::iterator CardListIterator;

#endif // CARD_H
