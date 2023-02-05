#include <iostream>
#include <fstream>
#include "isvalid.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Sono necessari almeno 2 argomenti" << endl;
        exit(1);
    }

    fstream in;
    in.open(argv[1], ios::in);
    if (in.fail()) {
        cout << "Apertura di " << argv[1] << " fallita" << endl;
        exit(1);
    }

    char buffer[255];
    while (in >> buffer) {
        if (isvalid(buffer)) {
            cout << buffer << endl;
        }
    }

    in.close();

    return 0;
}
