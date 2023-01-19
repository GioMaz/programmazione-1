#include <iostream>
#include <fstream>

using namespace std;

void bubble(int *a, int len) {
    int tmp;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (a[j] > a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 4) {
        cout << "Sono necessari almeno 4 argomenti" << endl;
        return 1;
    }

    int dim = atoi(argv[2]);
    int n = atoi(argv[3]);

    if (n > dim) {
        cout << "Il secondo intero deve essere minore o uguale al primo" << endl;
        return 1;
    }

    fstream in, out;
    in.open(argv[1], ios::in);
    if (in.fail()) {
        cout << "Apertura di " << argv[1] << " fallita" << endl;
        return 1;
    }

    int *voti = new int[dim];
    for (int i = 0; i < dim; i++) {
        in >> voti[i];
    }

    out.open("output.txt", ios::out);
    if (out.fail()) {
        cout << "Apertura di output.txt fallita" << endl;
        return 1;
    }

    bubble(voti, dim);
    for (int i = 0; i < n; i++) {
        out << voti[dim - i - 1] << endl;
    }

    return 0;
}
