#ifndef DATATYPE_H
#define DATATYPE_H

#include "../interfaces/IDataType.h"

class DataType : public virtual IDataType {
public:
    virtual const string & name() const;
};

#endif //DATATYPE_H
