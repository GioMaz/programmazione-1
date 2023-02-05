#include <iostream>
#include <fstream>
#include "cesare.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 4) {
        cout << "Sono necessari almeno 4 argomenti" << endl;
        exit(1);
    }

    fstream in, out;
    in.open(argv[1], ios::in);
    if (in.fail()) {
        cout << "Apertura di " << argv[1] << " fallita" << endl;
        exit(1);
    }

    out.open(argv[2], ios::out);
    if (out.fail()) {
        cout << "Apertura di " << argv[2] << " fallita" << endl;
        exit(1);
    }

    int chiave = atoi(argv[3]);
    char buffer[256];
    while (in >> buffer) {
        crypt(buffer, chiave);
        out << buffer << ' ';
    }

    in.close();
    out.close();

    return 0;
}
