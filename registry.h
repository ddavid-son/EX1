#pragma once
#include "person.h"
namespace ELC
{
    class registry
    {
    private:
        struct prs // voters list
        {
            person curr;
            prs *next;
        };
        prs *head;
        prs *tail;
        int len;

    public:
        registry() : head(nullptr), tail(nullptr), len(0) {} // new is calling for CTOR of person
        ~registry();

        void addperson(person &);
        void addperson(const char *, int, int, county &); // might be county&

        //void sethead(prs);
        //void settail();

        //getters
        //prs &getHead() const;
        //prs &getTail() const;
        prs &getHead();
        prs &getTail();
        int getlen() const;

        prs &getperson(int id); // IF CHANGE REQUIRED
                                // const prs &getperson(int id) const; // IF NO CHANGE REQUIRED
    };
} // namespace ELC