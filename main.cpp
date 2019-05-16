#include <iostream>
#include "Member.h"
#include "Group.h"

int main() {
    Member jeff(12,"Jannet",Date(12,7,1999),"1-800-lllhhoool","eeee.org");
cout<<jeff;
Member dezNuts(jeff);
cout<<dezNuts;
Group theBoys(6,"DoritoLovers",Date(12,6,1921),"Coocks","Deek");
theBoys.addMember(jeff);



}
