#pragma once
#include "replist.h"

namespace ELC
{

    class DynRepList
    {
    private:
        replist *replistarr;
        int psize, lsize;
        void resize();
        void resize(int);

    public:
        DynRepList(/* args */);
        ~DynRepList();

        void addreplist(); // adds new county replist
        void addreplist(person); // creats new replist with perosn
        void addreptocounty(int, person); // adds person as rep for exsiting county

        
        
        
        
        
    };
} // namespace ELC
