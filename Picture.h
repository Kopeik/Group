//
// Created by Cip on 5/13/2019.
//

#ifndef GROUP_PICTURE_H
#define GROUP_PICTURE_H


#include "Variable Classes/str.h"

class Picture {
    str url;

public:
    Picture(char *lol):url(lol){}
    Picture(str lol):url(lol){}
    Picture(Picture *lol):url(lol->getUrl()){}
    void draw()
    {
        cout<<url.rep();
    }
    str getUrl()
    {
        return url;
    }
    friend ostream& operator<<(ostream& os,const Picture& pic)
    {
        cout<<pic.url;
    }


};


#endif //GROUP_PICTURE_H
