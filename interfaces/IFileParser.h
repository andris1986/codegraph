#ifndef IFILEPARSER_H
#define IFILEPARSER_H

#include <string>

using namespace std;

class IFileParser {
public:
    virtual bool startParsing(const string & filePath) = 0;
    virtual bool isFinished() const = 0;
    virtual void waitForFinished() = 0;
};

#endif //IFILEPARSER_H

