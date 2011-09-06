#ifndef ISTRUCTURE_H
#define ISTRUCTURE_H

#include "IDataType.h"
#include "IVariable.h"

#include <vector>

using namespace std;

class IStructure: public virtual IDataType {
public:
    virtual const vector<IVariable> & properties() const = 0;
};

#endif //ISTRUCTURE_H
