#ifndef IVARIABLE_H
#define IVARIABLE_H

#include <string>

using namespace std;

class IVariable {
public:
    typedef enum {
        VAR_TYPE_VALUE,
        VAR_TYPE_REFERENCE,
        VAR_TYPE_POINTER
    } VariableType;

    virtual const string & name() const = 0;
    virtual VariableType type() const = 0;
};

#endif //IVARIABLE_H
