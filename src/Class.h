#ifndef CLASS_H
#define CLASS_H

#include "../interfaces/IClass.h"
#include "Structure.h"

class Class : public virtual Structure, public virtual IClass {
public:
    virtual const vector<IClass> & parents() const;
    virtual const vector<IClass> & children() const;
    virtual const vector<IMethod> & methods() const;
};

#endif //CLASS_H
