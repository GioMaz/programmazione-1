#include <iostream>
#include <fstream>

using namespace std;

bool isvalid(char *string) {
    bool valida = true;

    char iniziale[] = "http://";
    int i = 0;
    while (valida && i < 7) {
        if (string[i] != iniziale[i]) {
            valida = false;
        }
        i++;
    }

    int j = i+1;
    bool dominio = true;
    while (string[j] != '\0' && valida) {
        if (!(
            (string[j] >= 'a' && string[j] <= 'z') ||
            (string[j] >= 'A' && string[j] <= 'Z') ||
            (string[j] >= '0' && string[j] <= '9') ||
            string[j] == '_' ||
            string[j] == '.' ||
            string[j] == '/')) {
            valida = false;
        }

        if (dominio && string[j] == '/') {
            if (j - i < 3) {
                valida = false;
            }
            dominio = false;
        }

        if (!dominio && string[j] == '.') {
            valida = false;
        }
        j++;
    }

    return valida;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Sono necessari almeno 2 argomenti" << endl;
        exit(1);
    }

    fstream in;

    in.open(argv[1], ios::in);
    if (in.fail()) {
        cout << "Apertura di " << argv[1] << " fallita" << endl;
        exit(1);
    }

    char buffer[81];
    while (in >> buffer) {
        if (isvalid(buffer)) {
            cout << buffer << endl;
        }
    }

    in.close();

    return 0;
}
