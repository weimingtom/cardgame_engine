#ifndef ENGINE_H
#define ENGINE_H

#include "card.h"
#include "cardgenerator.h"

class Engine
{
public:
    Engine();
    virtual ~Engine();


//    //need to improve
//    Card *cardAt(int index)const
//    {
//        int i=0;
//        if(mList->size()>index)
//        {
//            for(CardListIterator list_iter = mList->begin();list_iter != mList->end(); list_iter++)
//            {
//                if(index==i)

//                {
//                    Card *c=*list_iter;
//                    return c;
//                }
//                i++;
//            }
//        }
//        return 0;
//    }
private:
    bool init();

private:
    CardList *mList;



};

#endif // ENGINE_H
