#ifndef IDATATYPE_H
#define IDATATYPE_H

#include <string>

using namespace std;

class IDataType {
public:
    virtual const string & name() const = 0;
};

#endif //IDATATYPE_H
