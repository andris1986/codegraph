#include "FileParser.h"
#include "Utils.h"

#include <fstream>
#include <streambuf>
#include <memory>
#include <regex>

/** @todo Need to use boost for regexp */

using namespace std;

bool FileParser::startParsing(const string & filePath) {
    fstream fileStream;
    fileStream.open(filePath.c_str(), ios_base::in);
    if(!fileStream.fail()) {

        fileStream.seekg (0, ios::end);
        streamsize fileLen = fileStream.tellg();
        fileStream.seekg (0, ios::beg);

        char * fileContent = new char[fileLen];

        fileStream.get(fileContent, fileLen, '\0');

        utils::log(fileContent);

        regex exp("class {.*};");
        regex_search("class A{};", exp);

        fileStream.close();

        return true;
    }
    else {
        return false;
    }


}

bool FileParser::isFinished() const {
    return false;
}

void FileParser::waitForFinished() {

}

