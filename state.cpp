#include "state.h"

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