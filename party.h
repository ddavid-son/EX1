#pragma once
#include "person.h"
#include "registry.h"
namespace ELC
{
    class party
    {
    private:
        const char *partyname;
        person &candidate; // points to a person that is the runner up
        registry replist;  // linked list of persons
        int se_num;

    public:
        party(/* args */);
        ~party();
    };

} // namespace ELC