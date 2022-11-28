#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main() {
    fstream in, out, app;

    // file << "Ciao"
    out.open("testo.txt", ios::out);
    if (out.fail()) exit(1);
    if (out) cout << "File esiste!" << endl;
    out << "Ciao";
    out.close();

    // file >> buffer
    in.open("testo.txt", ios::in);
    if (in.fail()) exit(1);
    if (in) cout << "File esiste!" << endl;
    char buffer[5];
    in >> buffer;
    // oppure
    // in.getline(buffer, 5);
    in.close();

    // file << "Ciao"
    app.open("testo.txt", ios::out|ios::app);
    if (app) cout << "File esiste!" << endl;
    app.close();

    return 0;
}
