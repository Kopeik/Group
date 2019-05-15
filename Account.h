//
// Created by Cip on 5/15/2019.
//

#ifndef GROUP_ACCOUNT_H
#define GROUP_ACCOUNT_H


class Account {
int id;
str name;
Date joinDate;
public:
    int getId(){return id;}
    str getName(){return name;}
    void setName(str &lol){name=lol;}
    Date getDate(){return joinDate;}
    Account(const char* theName,Date theDate,int theId):name(theName),joinDate(theDate)
    {
        id=theId;
    }
};


#endif //GROUP_ACCOUNT_H
