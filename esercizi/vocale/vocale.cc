#include <iostream>
#include <cmath>

using namespace std;

enum vocali {
    a = 'a', e = 'e', i = 'i', o = 'o', u = 'u', A = 'A', E = 'E', I = 'I', O = 'O', U = 'U'
};

int main() {
    char c;
    cin >> c;

    switch (c)
    {
        case a: case e: case i: case o: case u: case A: case E: case I: case O: case U:
            cout << "vocale" << endl; break;
        default: cout << "consonante" << endl; break;
    }

    return 0;
}
