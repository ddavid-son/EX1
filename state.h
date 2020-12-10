#pragma once
#include "county.h"
namespace ELC
{

    class state
    {
    private:
        struct st
        {
            county cn;
            county *next;
        };
        county *head;
        county *tail;
        int num_of_counties;

    public:
        state() : head(new county), tail(new county), num_of_counties(0) {} // maight be head/tail( new county() ) instead
        ~state();

        void addcounty(const county &);
        void addcounty(county &);
        // void addcounty(const char* name, int num_of_reps); // not realy required i think

        const county &getcounty(int); // get by serial number
        int getnum_of_counties() const;
    };

} // namespace ELC