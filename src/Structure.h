#ifndef STRUCTURE_H
#define STRUCTURE_H

#include "../interfaces/IStructure.h"
#include "DataType.h"

class Structure: public virtual DataType, public virtual IStructure{
public:
    virtual const vector<IVariable> & properties() const;
};

#endif //STRUCTURE_H
