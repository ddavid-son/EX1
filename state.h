#pragma once
#include "county.h"
namespace ELC
{

    class state
    {
    private:
        county *cntArr;
        int lsize, psize; // lsize for actual number of items, psize for the arr actual size [ (psize >= lsize) == true ]
        void resize();

    public:
        state() : cntArr(new county[2]), lsize(0), psize(2) {}
        state(county &cn) : state()
        {
            lsize++;
            cntArr[0] = cn;
        }
        ~state();

        void addcounty(county &);
        // void addcounty(const char* name, int num_of_reps); // not realy required i think

        const county &getcounty(int); // get by serial number
        int getnum_of_counties() const;
    };

} // namespace ELC