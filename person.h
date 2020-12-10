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
        person() : person(nullptr, 0, 0, -1) {}                                                                               // the (-1) makes sure no person is countyless
        person(const char *name, int id, int YOB, int countynum) : name(name), id(id), yearofbirth(YOB), county(countynum) {} // second ctor
        ~person();

        // setters
        bool setname();
        bool setid();
        bool setyearofbirth();
        bool setcounty();
        bool setname();

        //getters;
        int getid() const;
        int getyearofbitrth() const;
        int getcounty() const;
        const char *getname() const; // const is unneccecey
    };
} // namespace ELC