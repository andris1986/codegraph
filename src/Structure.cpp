#include "Structure.h"

const vector<IVariable> & Structure::properties() const {
    static vector<IVariable> _properties;
    return _properties;
}

