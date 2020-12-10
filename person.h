#pragma once
#include "county.h"

namespace ELC
{
    class person
    {
    private:
        const char *name;
        int id; // maybe better be const char * as well
        int yearofbirth;
        county county; // might be a diffrent type to represent the county

    public:
        person() : person(nullptr, 0, 0, -1) {}                                                         // the (-1) makes sure no person is countyless
        person(const char *name, int id, int YOB, int countynum) : name(name), id(id), yearofbirth(YOB) // second ctor
        {
            // need to find county number - countynum -  and assign it here
        }
        ~person();

        // setters
        bool setname(const char *);
        bool setid(int);
        bool setyearofbirth(int);
        // bool setcounty(county);

        //getters;
        int getid() const;
        int getyearofbitrth() const;
        //county& getcounty() const;
        const char *getname() const; // const is unneccecey

        void operator=(person &);
    };
} // namespace ELC