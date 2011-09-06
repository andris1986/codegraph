#ifndef FILEPARSER_H
#define FILEPARSER_H

#include "../interfaces/IFileParser.h"

class FileParser : public virtual IFileParser {
public:
    virtual bool startParsing(const string & filePath);
    virtual bool isFinished() const;
    virtual void waitForFinished();
};

#endif //FILEPARSER_H

