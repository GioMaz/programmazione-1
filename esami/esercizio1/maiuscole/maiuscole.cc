#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cout << "Usage: <file1> <file2>" << endl;
        return 1;
    }

    fstream in, out;
    in.open(argv[1], ios::in);
    if (in.fail()) {
        cout << "Apertura del file " << argv[1] << " fallita" << endl;
        return 1;
    }

    out.open(argv[2], ios::out);
    if (out.fail()) {
        cout << "Apertura del file " << argv[2] << " fallita" << endl;
        return 1;
    }

    bool maiuscola = true;
    char c;
    while (in.get(c)) {
        if (c >= 'a' && c <= 'z' && maiuscola) {
            c -= ('a' - 'A');
        }
        maiuscola = false;
        if (c == '.' || c == '!' || c == '?') {
            maiuscola = true;
        }
        out << c;
    }

    return 0;
}
