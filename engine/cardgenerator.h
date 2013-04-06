#ifndef CARDGENERATOR_H
#define CARDGENERATOR_H
#include <iostream>
#include "card.h"
using namespace std;

class CardGenerator
{
public:
    static void generateAndShuffle(CardList *aList);
    static void print(CardList *aList);
private:
    static void clubs(CardList *aList);
    static void spades(CardList *aList);
    static void hearts(CardList *aList);
    static void diamonds(CardList *aList);

    static void series(CardList *aList,CardType aType);
    static void shuffle(CardList *aList);
};

#endif // CARDGENERATOR_H
