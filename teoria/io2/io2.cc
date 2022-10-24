#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream in, out, append;

    in.open("testo.txt", ios::in);
    out.open("testo.txt", ios::out);
    append.open("testo.txt", ios::out|ios::app);

    // file << "Ciao"
    out << "Ciao";

    // file >> buffer
    char buffer[4];
    in >> buffer;

    in.close();
    out.close();
    append.close();

    return 0;
}
