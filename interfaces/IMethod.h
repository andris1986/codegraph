#ifndef IMETHOD_H
#define IMETHOD_H

#include "IVariable.h"

#include <vector>

using namespace std;

class IMethod {
public:
    virtual const string & name() const = 0;
    virtual const vector<IVariable> & parameters() const = 0;
    virtual bool isStatic() const = 0;
    virtual bool isVirtual() const = 0;
    virtual bool isImplemented() const = 0;
};

#endif //IMETHOD_H
