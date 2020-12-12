#pragma once
#include "county.h"
#include "party.h"
#include "registry.h"
#include "state.h"

namespace ELC
{
    class replist
    {
    private:
        registry RPlist; //person linked list
        county &county;  //refrenc to the county of the reps

    public:
        replist(int countynum, county &cn) : RPlist(), county(county)
        {
        }
        ~replist();

        //void operator=(replist &);

        void addnewcounty(county &cn, person &pr);

        void addrep(int countynum, int id); // id and county num
        void addrep(int, person &);         // county num and person
    };

} // namespace ELC