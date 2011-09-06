#include "DataType.h"

const string & DataType::name() const {
    static string _name;
    return _name;
}

