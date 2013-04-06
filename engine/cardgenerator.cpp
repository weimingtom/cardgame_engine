#include "cardgenerator.h"
#include <algorithm>
#include <ctime>
#include <cstdlib>

void CardGenerator::generateAndShuffle(CardList *aList)
{
     std::srand ( unsigned ( std::time(0) ) );
    if(aList==0)
    {
        cout<<"Null Pointer"<<endl;
        return;
    }
    clubs(aList);
    spades(aList);
    hearts(aList);
    diamonds(aList);

    shuffle(aList);
}

void CardGenerator::shuffle(CardList *aList)
{
     std::random_shuffle(aList->begin(), aList->end());

}

void CardGenerator::print(CardList *aList)
{
    for(CardListIterator list_iter = aList->begin();
        list_iter != aList->end(); list_iter++)
    {
        Card *c=*list_iter;
        std::cout << c->value()<<","<<c->type()<<endl;
    }
}

void CardGenerator::clubs(CardList *aList)
{
    series(aList,Club);
}

void CardGenerator::spades(CardList *aList)
{
    series(aList,Spade);
}

void CardGenerator::hearts(CardList *aList)
{
    series(aList,Heart);
}

void CardGenerator::diamonds(CardList *aList)
{
    series(aList,Diamond);
}

void CardGenerator::series(CardList *aList,CardType aType)
{
    for(int i=Two;i<=Ass;i++)
    {
        Card *card=new Card(aType,(CardValue)i);
        aList->push_back(card);
    }
}
