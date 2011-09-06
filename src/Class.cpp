#include "Class.h"

const vector<IClass> & Class::parents() const {
    static vector<IClass> _parents;
    return _parents;
}

const vector<IClass> & Class::children() const {
    static vector<IClass> _children;
    return _children;
}

const vector<IMethod> & Class::methods() const {
    static vector<IMethod> _methods;
    return _methods;
}

