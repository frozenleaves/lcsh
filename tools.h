//
// Created by snow on 2020/10/29.
//

#ifndef LCSH_TOOLS_H
#define LCSH_TOOLS_H


#include <string>

using namespace std;

bool match(const string& str, const string& mode);

void __main(const string& inputfile, const string& outputfile, const string& mode);

#endif //LCSH_TOOLS_H
