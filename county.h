#pragma once
#include "registry.h"

namespace ELC
{
    static int NumOfCounties = 0;
    class county
    {
    private:
        const char *countyname;
        int repnum;  // number of representative
        int senum;   // serial number
        float voted; // in percentage  OR  can be int aswell and add method to evaluate the precentage
        int AlreadyVoted;
        registry nomlist; // nominees
        registry voters;  // points to the first and last person from the county as given in the registry
                          // all voters in county - not sure this is necessary

    public:
        county() : county(nullptr, 0) {}
        county(const char *name, int repnum) : countyname(name), repnum(repnum)
        {
            senum = NumOfCounties++;
            AlreadyVoted = 0;
            //maybe need to init nomlist and voters (registry)
        }
        ~county()
        {
            delete countyname; // maybe delete[]
        }

        //setters
        bool setcountyname(const char *);

        //getters
        int getsize();
        int getvoted();
        int getsenum();
        const char *getcountyname();
        const registry &getnomlist();
        const registry &getvoters();

        //methodes

        //operator
        void operator=(county &);
    };

} // namespace ELC