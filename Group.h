//
// Created by Cip on 5/14/2019.
//

#ifndef GROUP_GROUP_H
#define GROUP_GROUP_H


#include <list>
#include "Variable Classes/Date.h"
#include "Variable Classes/str.h"
#include "Member.h"

class Group {
int id;
str name;
Date joinDate;
str description;
list<Member> team;
public:
void add()
{
}


};


#endif //GROUP_GROUP_H
