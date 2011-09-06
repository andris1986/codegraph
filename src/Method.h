#ifndef METHOD_H
#define METHOD_H

#include "../interfaces/IMethod.h"

class Method : public virtual IMethod {
public:
    virtual const string & name() const;
    virtual const vector<IVariable> & parameters() const;
    virtual bool isStatic() const;
    virtual bool isVirtual() const;
    virtual bool isImplemented() const;
};

#endif //METHOD_H
