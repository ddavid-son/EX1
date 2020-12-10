#include "registry.h"
#include "county.h"
#include "party.h"
#include "state.h"
#include "person.h"

namespace ELC
{

    bool person::setname(const char *name)
    {
        this->name = name;
        return true;
    }
    bool person::setid(int id)
    {
        this->id = id;
        return true;
    }

    bool person::setyearofbirth(int YOB)
    {
        this->yearofbirth = YOB;
        return true;
    }

    /*bool person::setcounty(county county)

{ // need to build = operator
    this->county = county;
    return true;
}*/

    /*int person:: getcounty(){
    re
}


*/

    int person::getid() const
    {
        return this->id;
    }

    const char *person::getname() const
    {
        return this->name;
    }

    int person::getyearofbitrth() const
    {
        return this->yearofbirth;
    }

    void person::operator=(person &pr)
    {

        this->setname(pr.getname());
        this->setid(pr.getid());
        this->setyearofbirth(pr.getyearofbitrth());
        //this->setcounty(pr.getcounty());
    }

} // namespace ELC