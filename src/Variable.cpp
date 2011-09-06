#include "Variable.h"

const string & Variable::name() const {
    static string _name;
    return _name;
}


IVariable::VariableType Variable::type() const {
    return IVariable::VAR_TYPE_VALUE;
}

