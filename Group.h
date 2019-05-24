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

class Group:public Account {

str description;
list<Member> team;

public:
    Group(int theId,const char* theName,Date theDate,const char* theDescription,const str &pic):Account(theName,theDate,theId,pic),description(theDescription)
    {

    }

    Group(Group &lol):Account(lol.getName(),lol.getJoinDate(),lol.getId(),lol.picture().getUrl()),description(lol.getDescription())
    {

    }
    Group():Account(),description(),team(){}

    void setDescription(str &lol){description=lol;}

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
void describe()
{
        Account::describe();
        cout<<"I'm Group::describe()\n";
}

};


#endif //GROUP_GROUP_H
