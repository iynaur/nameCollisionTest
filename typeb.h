#ifndef TYPEB_H
#define TYPEB_H
#include <iostream>

class TypeA
{
public:
    TypeA(){
        {
            std::cerr<<"real type B\n";
        }
    }
    char x;
    char y;
    char c[6];

    void init()
    {
        std::cerr<<"real init B\n";
        std::cerr<<"size of TypeA is "<<sizeof(TypeA)<<'\n';
        x=1;
        y=2;
        for  (char &v : c) v = 0;
    }

    void print()
    {
        std::cerr<<"x = "<<(int)x<<std::endl;
        std::cerr<<"y = "<<(int)y<<std::endl;
        for (char &v : c) std::cerr<<"c[] = "<<(int)v<<std::endl;
    }
};

#endif // TYPEB_H
