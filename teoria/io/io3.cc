#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream in, out, append;

    // file << "Ciao"
    out.open("testo.txt", ios::out);
    out << "Ciao";
    out.close();

    // file >> buffer
    in.open("testo.txt", ios::in);
    char buffer[5];
    in >> buffer;
    in.close();
    cout << buffer << endl;

    // file << "Ciao"
    append.open("testo.txt", ios::out|ios::app);
    append.close();

    return 0;
}
