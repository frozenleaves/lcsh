//
// Created by snow on 2020/10/29.
//

#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include "tools.h"


using namespace std;


bool match(const string &str, const string &mode) {
    bool found_flag;
    regex e("K00380|K00381|K11180|K11181|K08357|K08358|K08359|K08352|K08353|K08354|\\ssat\\s|\\sapr\\s|\\sasr\\s|\\scys\\s|\\sphs\\s|\\spsr\\s|\\ssir\\s|\\sdsr\\s|\\sttr\\s|\\sphs\\s|\\spsr\\s");
    regex e2("K17218|K17229|K17230|K16952|K17219|K17725|sqr\\s|\\sfcc\\s|\\sdsr\\s|\\ssat\\s|\\sapr\\s|\\ssox\\s|\\ssoe\\s|\\ssor\\s|\\stsd\\s|\\sdox\\s|\\ssre\\s|\\sETHE1\\s");
//    regex e("K00380|K00381|K11180|K11181|K08357|K08358|K08359|K08352|K08353|K08354");
    smatch m;
//        transform(str.begin(), str.end(), str.begin(), (int (*)(int))tolower);
//    bool found=regex_search(str, m, e);
    bool found;
    if (mode == "ox") {
        found = regex_search(str, m, e);
    } else if (mode == "ed") {
        found = regex_search(str, m, e2);
    } else {
        cout << "invalid params;" << mode << endl;
        return false;
    }
    if (found) {
        found_flag = true;
        cout << "match: " << m.str(0) << endl;
    } else found_flag = false;
    return found_flag;
}


void __main(const string &inputfile, const string &outputfile, const string &mode) {
    ifstream read_file;
    ofstream write_file;
    write_file.open(outputfile, ios::app);
    read_file.open(inputfile, ios::binary);

    string line;
    int index = 0;
    int t1 = time(0);
    while (getline(read_file, line)) {
        if (match(line, mode)) {
            write_file<<index<<": "<<line<<endl;
//            cout << index << ": " << line << endl;
        }
        index++;
//
    }




    int t2 = time(0);
    cout << "cost time:" << t2 - t1 << "s" << endl;
}