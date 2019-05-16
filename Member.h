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

class Member:public Account {
    str phoneNumber;
    Picture pic;

public:
    Member(int theId,char *daName,Date idk,char *daNumber,char* daUrl):Account(daName,idk,theId),pic(daUrl),phoneNumber(daNumber)
    {
    }
    Member(Member *copie):Account(copie->getName(),copie->getJoinDate(),copie->getId()),phoneNumber(copie->getPhone()),pic(copie->picture())
    {
    }
    bool operator==(const Member &mom)
    {
        if(getId()==mom.getId())
            return true;
        return false;
    }

    void setPhone(str p)
    {
        phoneNumber=p;
    }
    str getPhone()
    {
        return phoneNumber;
    }

    Picture picture()
    {
        return pic;
    }
    friend ostream& operator<<(ostream& os,Member& mem)
    {
        cout<<mem.getName()<<":\n"<<"Id: "<<mem.getId()<<"\nPhone number: "<<mem.getPhone()<<"\nJoin date: "<<mem.getJoinDate()<<"\nURL:"<<mem.picture()<<endl;
    }


};


#endif //GROUP_MEMBER_H
