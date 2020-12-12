#include "state.h"
#include "iostream" // not working with "ostream"

namespace ELC
{
    // need to check for index starts from 0 OR 1 and adjust accordingly

    void state::addcounty(county &cn)
    {
        if (this->lsize == this->psize)
        {
            this->resize();
        }
        cntArr[lsize] = cn;
        lsize++;
    }

    void state::resize(int newsize)
    {
        if (newsize > psize)
        {
            county *newarr = new county[newsize];
            for (int i = 0; i < lsize; i++)
            {
                newarr[i] = cntArr[i];
            }
            delete[] cntArr;
            cntArr = newarr;
            psize = newsize;
        }
        else
        {
            std::cout << " Error! new size nust be greater then the physical size" << std::endl;
        }
    }

    void state::resize()
    {
        psize *= 2;
        county *newarr = new county[psize];
        for (int i = 0; i < lsize; i++)
        {
            newarr[i] = cntArr[i];
        }
        delete[] cntArr;
        cntArr = newarr;
    }

    const county &state::getcounty(int sernum)
    {
        return cntArr[sernum - 1];
    }

    int state::getnum_of_counties() const
    {
        return lsize;
    }

} // namespace ELC