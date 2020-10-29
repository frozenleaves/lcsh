#include <iostream>
#include <string>
#include "tools.h"
#include <ctime>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
//    string input = "/home/snow/桌面/GW5.emapper.annotations";
//    string output = "/home/snow/桌面/ret2.txt";
    string input;
    string output = "out.search";
    string mode;
    if (argc < 2) {
        cout << "usage: \nsearch -i inputfile -o outputfile -m sulferred" << endl;
        return 0;
    } else {
        if (string(argv[1]) != "-i") {
            cout << "need param -i !\nusage: \n./lcsh-i inputfile -o outputfile -m sulferred" << endl;
            return 0;
        } else if (argc<4||string(argv[3]) != "-o") {
            cout << "need param -o! \nusage: \n./lcsh -i inputfile -o outputfile -m sulferred" << endl;
            return 0;
        } else if (argc<6||string(argv[5]) != "-m") {
            cout << "need param -m! \nusage: \n./lcsh -i inputfile -o outputfile -m sulferred" << endl;
            return 0;
        } else {
            input = argv[2];
            output = argv[4];
            mode = argv[6];
        }

        __main(input, output, mode);

        return 0;
    }
}

