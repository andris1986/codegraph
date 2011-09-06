#ifndef VARIABLE_H
#define VARIABLE_H

#include "../interfaces/IVariable.h"

class Variable : public virtual IVariable {
public:
    virtual const string & name() const;
    virtual IVariable::VariableType type() const;
};

#endif //VARIABLE_H
