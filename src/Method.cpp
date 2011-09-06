#include "Method.h"

const string & Method::name() const {
    static string _name;
    return _name;
}

const vector<IVariable> & Method::parameters() const {
    static vector<IVariable> _parameters;
    return _parameters;
}

bool Method::isStatic() const {
    return false;
}

bool Method::isVirtual() const {
    return false;
}

bool Method::isImplemented() const {
    return false;
}

