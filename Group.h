//
// Created by Cip on 5/14/2019.
//

#ifndef GROUP_GROUP_H
#define GROUP_GROUP_H


#include <list>
#include "Variable Classes/Date.h"
#include "Variable Classes/str.h"
#include "Member.h"
#include "Account.h"

class Group:Account {

str description;
list<Member> team;
Picture pic;
public:
    Group(int theId,const char* theName,Date theDate,const char* theDescription,const str &pic):Account(theName,theDate,theId),description(theDescription),pic(pic)
    {

    }

    Group(Group &lol):Account(lol.getName(),lol.getDate(),lol.getId()),description(lol.getDescription()),pic(lol.getPic())
    {

    }

    void setDescription(str &lol){description=lol;}

Picture getPic(){return pic.getUrl();}
   str getDescription(){return description;}


void addMember(const Member& lol)
{
    team.push_back(lol);
}
void removeMember(const Member& lol)
{
    team.remove(lol);
}
list<Member> getMember()
{
    return team;
}


};


#endif //GROUP_GROUP_H
