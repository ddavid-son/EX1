#pragma once
#include "person.h"
namespace ELC
{
    class registry
    {
    private:
        struct PRS // voters list
        {
            person curr;
            person *next;
        };
        person *head;
        person *tail;
        int len;

    public:
        registry() : head(new person), tail(new person), len(0) {} // new is calling for CTOR of person
        ~registry();

        void addperson(const person &);
        void addperson(person &);
        void addpeson(const char *, int, int, int);

        //getters
        person &getHead() const;
        person &getTail() const;
        person &getHead();
        person &getTail();
        int getlen() const;

        person &getperson(int id);             // IF CHANGE REQUIRED
        const person &getperson(int id) const; // IF NO CHANGE REQUIRED
    };
} // namespace ELC