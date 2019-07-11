#ifndef TYPEA_H
#define TYPEA_H

#include <iostream>

namespace {
class TypeA
{
public:
    TypeA()
    {
        std::cerr<<"real type A\n";
    }
    int x;
    int y;

    void init()
    {
        std::cerr<<"real init A\n";
        std::cerr<<"size of TypeA is "<<sizeof(TypeA)<<'\n';
        x=3;
        y=4;
    }


};
}

#endif // TYPEA_H
