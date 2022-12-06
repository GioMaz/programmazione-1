#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));

    int dim1 = 3;
    int dim2 = 100;

    if (dim1 > 100) {
        return 1;
    }
    if (dim1 > dim2) {
        return 1;
    }

    int pattern[dim1];
    int testo[dim2];

    for (int i = 0; i < dim1; i++) {
        pattern[i] = rand() % 10 + 1;
        cout << pattern[i] << ' ';
    }
    cout << endl;

    for (int i = 0; i < dim2; i++) {
        testo[i] = rand() % 10 + 1;
        cout << testo[i] << ' ';
    }
    cout << endl;

    bool res = false;
    for (int i = 0; i < dim2 - dim1 + 1; i++) {
        bool uguale = true;
        for (int j = 0; j < dim1; j++) {
            if (testo[i+j] != pattern[j]) {
                uguale = false;
            }
        }
        if (uguale == true) {
            res = true;
        }
    }

    cout << res << endl;

    return 0;
}
