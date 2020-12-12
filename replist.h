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
        registry RPArray; //array of person linked list
        county &county;   //refrenc to the county of the reps

    public:
        replist(int countynum, county &cn) : RPArray(), county(county)
        {
        }
        ~replist();

        void addcounty(county &);
        void addcounty(const char *, int);

        void addrep(int, int);      // id and county num
        void addrep(int, person &); // county num and person
    };

} // namespace ELC