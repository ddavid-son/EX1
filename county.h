#pragma once
#include "registry.h"

namespace ELC
{
    class county
    {
    private:
        const char *countyname;
        float voted;      // in percentage  OR  can be int aswell and add method to evaluate the precentage
        int senum;        // serial number
        int repnum;       // number of representative
        registry nomlist; // nominees
        registry voters;  // points to the first and last person from the county as given in the registry
                          // all voters in county - not sure this is necessary

    public:
        county(const char *name, int repnum, int senum = 0, float voted = 0) : countyname(name), repnum(repnum) {}
        ~county();

        //setters
        bool setcountyname();
        bool setvoted();
        bool setsenum();
        bool setsize();

        //getters

        int getsize();
        int getvoted();
        int getsenum();
        const char *getcountyname();
        const registry &getnomlist();
        const registry &getvoters();
    };

} // namespace ELC