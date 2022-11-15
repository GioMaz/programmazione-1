#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream in, out, append;

    // file << "Ciao"
    out.open("testo.txt", ios::out);
    if (out) cout << "File esiste!" << endl;
    out << "Ciao";
    out.close();

    // file >> buffer
    in.open("testo.txt", ios::in);
    if (in) cout << "File esiste!" << endl;
    char buffer[5];
    in >> buffer;
    // oppure
    // in.getline(buffer, 500);
    in.close();
    cout << buffer << endl;

    // file << "Ciao"
    append.open("testo.txt", ios::out|ios::app);
    if (app) cout << "File esiste!" << endl;
    append.close();

    return 0;
}
