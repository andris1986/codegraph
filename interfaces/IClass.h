#ifndef ICLASS_H
#define ICLASS_H

#include "IClass.h"
#include "IMethod.h"
#include "IStructure.h"

#include <vector>
using namespace std;

class IClass : public virtual IStructure {
public:
    virtual const vector<IClass> & parents() const = 0;
    virtual const vector<IClass> & children() const = 0;
    virtual const vector<IMethod> & methods() const = 0;
};

#endif //ICLASS_H
