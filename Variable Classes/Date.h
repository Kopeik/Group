//
// Created by Cip on 5/13/2019.
//

#ifndef GROUP_DATE_H
#define GROUP_DATE_H


class Date {
    int day,month,year;
public:
    Date(int dae,int mounth,int yeaar)
    {
        day=dae;
        month=mounth;
        year=yeaar;
    }
    Date()
    {
        day=1;
        month=1;
        year=1999;
    }
    friend ostream& operator<<(ostream& os,const Date& dt)
    {
        cout<<dt.day<<"."<<dt.month<<"."<<dt.year;
    }
};


#endif //GROUP_DATE_H
