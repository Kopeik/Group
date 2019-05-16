//
// Created by Cip on 5/13/2019.
//

#ifndef GROUP_STR_H
#define GROUP_STR_H

#include <iostream>
#include <string.h>
using namespace std;
class str {

private:
    char* word;
public:
    str operator=(const char *p)
    {
        if(word!=nullptr)
            delete word;
        word=new char[strlen(p)+1];
        strcpy(this->word,p);
    }
    str operator=(str p)
    {
        if(word!=nullptr)
            delete word;
        word=new char[strlen(p.rep())+1];
        strcpy(this->word,p.rep());
    }
    friend ostream& operator<<(ostream& os,const str& st)
    {
        cout<<st.word;
    }
    str(const char* a)
    {
        word=new char[strlen(a)+1];
        strcpy(this->word,a);
    }
/*~str()
{
    delete word;
}*/
    str()
    {
        word=nullptr;
    }
    str(const str &a)
    {
        if(a.word==nullptr)
            this->word=nullptr;
        else
        {
            word=new char[strlen(a.word)+1];
            strcpy(this->word,a.word);
        }
    }

    char* get()
    {
        if(word!=nullptr)
            return word;
        else
            return NULL;
    }
    str& set(const char *p)
    {
        delete word;
        word=new char[strlen(p)+1];
        strcpy(word,p);
        return *this;
    }
    void set(int a,const char l)
    {
        word[a]=l;
    }
    char& get(int a)
    {
        return word[a];
    }
    char* rep()
    {
        return word;
    }
    void rep(const char *p)
    {
        if(word!=nullptr)
            delete word;
        word=new char[strlen(p)+1];
        strcpy(this->word,p);
    }
};


#endif //GROUP_STR_H
