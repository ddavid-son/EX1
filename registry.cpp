#pragma once

#include "person.h"
#include "registry.h"

namespace ELC
{

    void registry::addperson(person &pr)
    {
        prs *newtail = new prs;

        newtail->curr = pr; // assignment operator needed
        newtail->next = nullptr;

        this->tail->next = newtail;
        this->tail = newtail;
        this->len++;
    }

    void registry::addperson(const char *name, int id, int YOB, county &county)
    {
        person pr;
        pr.setyearofbirth(YOB);
        pr.setid(id);
        pr.setname(name);
        //pr.setcounty(county);
        addperson(pr);
    }

    registry::prs &registry::getHead()
    {
        return *head;
    }
    registry::prs &registry::getTail()
    {
        return *tail;
    }

    int registry::getlen() const
    {
        return this->len;
    }

    registry::prs &registry::getperson(int id)
    {
        prs *temp = this->head;
        while (temp != nullptr)
        {
            int x;
            x = temp->curr.getid() - id;
            if (x == 0)
                return *temp;
            else
                temp = temp->next;
        }
    }

    // const registry::prs &registry::getperson(int id) const
    // {
    //     return const(this->getperson(id));
    // }

} // namespace ELC
