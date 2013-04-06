#include "cardgenerator.h"


void CardGenerator::generateAndShuffle(CardList *aList)
{
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
    cout<<"comes here";
    for(CardListIterator list_iter = aList->begin();
        list_iter != aList->end(); list_iter++)
    {
        Card *c=*list_iter;
        std::cout << c->type();
    }
}

void CardGenerator::print(CardList *aList)
{
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
    for(int i=0;i<=ASS;i++)
    {
        Card *card=new Card(aType,(CardValue)i);
        aList->push_back(card);
    }
}
