#pragma once
#include "county.h"
#include "state.h"

namespace ELC
{
    class person
    {
    private:
        const char *name;
        int id; // maybe better be const char * as well
        int yearofbirth;
        county &county; // county& OR county

    public:
        person(const char *name, int id, int YOB, int countynum) : name(name), id(id), yearofbirth(YOB)
        {
            // county = st.getcounty(countynum);
        } // need to find a wa to initiate county... consider including state.h
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