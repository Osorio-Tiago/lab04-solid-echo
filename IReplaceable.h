//
// Created by santi on 8/24/2020.
//

#ifndef LAB04_SOLID_IREPLACEABLE_H
#define LAB04_SOLID_IREPLACEABLE_H
#include <sstream>
using namespace std;

class IReplaceable{
public:
    virtual string replace() = 0;
};

#endif //LAB04_SOLID_IREPLACEABLE_H
