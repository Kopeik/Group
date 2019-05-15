//
// Created by Cip on 5/13/2019.
//

#ifndef GROUP_MEMBER_H
#define GROUP_MEMBER_H
#include "Variable Classes/str.h"
#include "Variable Classes/Date.h"
#include "Picture.h"
#include "Account.h"
using namespace std;

class Member:Account {
    int id;
    str name;
    Date joinDate;
    str phoneNumber;
    Picture pic;

public:
    Member(int theId,char *daName,Date idk,char *daNumber,char* daUrl):name(daName),pic(daUrl),phoneNumber(daNumber)
    {
        id=theId;
    }
    Member(Member *copy):name(copy->name),pic(copy->picture()),phoneNumber(copy->getPhone())
    {
        id=copy->getId();
    }
    bool operator==(const Member &mom)
    {
        if(id==mom.getId())
            return true;
        return false;
    }
    void setName(str p)
    {
        name=p;
    }
    str getName()
    {
        return name;
    }
    void setPhone(str p)
    {
        phoneNumber=p;
    }
    str getPhone()
    {
        return phoneNumber;
    }
    int getId()const{return id;}
    Date getJoinDate(){return joinDate;}
    Picture picture()
    {
        return pic;
    }
    friend ostream& operator<<(ostream& os,const Member& mem)
    {
        cout<<mem.name<<":\n"<<"Id: "<<mem.id<<"\nPhone number: "<<mem.phoneNumber<<"\nJoin date: "<<mem.joinDate<<"\nURL:"<<mem.pic<<endl;
    }


};


#endif //GROUP_MEMBER_H
