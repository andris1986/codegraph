#include "Utils.h"

#include <iostream>
using namespace std;

namespace utils {

    void log(const string & msg) {
        log(msg.c_str());
    }

    void log(const char * msg) {

        cout << msg << endl;
    }

}
