#include <iostream>
#include <fstream>

using namespace std;

// implementazione strlen
int strlen(char buffer[]) {
    int i = 0;
    bool finito = false;
    while (i < 255 && !finito) {
        if (buffer[i] == '\0') {
            finito = true;
        }
        else {
            i++;
        }
    }
    return i;
}

// implementazione strcpy
void strcpy(char buffer1[], char buffer2[]) {
    for (int i = 0; i < 255; i++) {
        buffer1[i] = buffer2[i];
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cout << "Almeno 3 argomenti necessari";
        return 1;
    }

    fstream in, out;

    in.open(argv[1], ios::in);
    if (in.fail()) {
        cout << "Apertura di " << argv[1] << " fallita" << endl;
        return 1;
    }

    out.open(argv[2], ios::out);
    if (out.fail()) {
        cout << "Apertura di " << argv[2] << " fallita" << endl;
        return 1;
    }

    char buffer1[255];
    char buffer2[255];
    int dim;
    while (in.getline(buffer1, 255)) {
        dim = strlen(buffer1);
        out << dim << endl;
        if (dim > strlen(buffer2)) {
            strcpy(buffer2, buffer1);
        }
    }

    in.close();
    out.close();

    cout << buffer2 << endl;

    return 0;
}
