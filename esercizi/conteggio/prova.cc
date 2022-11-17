#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    fstream in;
    in.open(argv[1], ios::in);

    const int len = (int)'z';

    int a[len] = {};
    char c;
    while (!in.eof()) {
        in.get(c);

        if (c >= 'A' && c <= 'Z') {
            c += 'a' - 'A';
        }

        if (c >= 'a' && c <= 'z') {
            a[(int)c]++;
        }
    }

    for (int i = (int)'a'; i < len; i++) {
        cout << (char)i << " = " << a[i] << endl;
    }
}
