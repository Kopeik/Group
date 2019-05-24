//
// Created by Cip on 5/15/2019.
//

#ifndef GROUP_ACCOUNT_H
#define GROUP_ACCOUNT_H


class Account {
int id;
str name;
Date joinDate;
Picture pic;
public:
    int getId() const{return id;}
    str getName(){return name;}
    void setName(str &lol){name=lol;}
    Date getJoinDate(){return joinDate;}
    Account(const char* theName,Date theDate,int theId,char* thePic):name(theName),joinDate(theDate),pic(thePic)
    {
        id=theId;
    }
     Account(str theName,Date theDate,int theId,str thePic):name(theName),joinDate(theDate),pic(thePic)
    {
        id=theId;
    }
    Account():name(),joinDate(),pic()
    {
        id=0;
    }
    Picture picture()
    {
        return pic;
    }
   virtual void describe()
    {
        cout<<"I'm Account::describe()\n";
    }
};


#endif //GROUP_ACCOUNT_H
