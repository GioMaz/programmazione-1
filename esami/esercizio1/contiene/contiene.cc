#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

bool contiene(char **parole, char *parola, int n1, int n2) {
    if (n1 == n2) {
        return false;
    }

    int n = (n1+n2) / 2;
    int cmp = strcmp(parola, parole[n]);

    if (cmp == 0) {
        return true;
    }
    else if (cmp < 0) {
        return contiene(parole, parola, n1, n);
    }
    else {
        return contiene(parole, parola, n+1, n2);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 4) {
        cout << "Sono necessari almeno 4 argomenti" << endl;
        exit(1);
    }

    fstream in1, in2, out;

    in1.open(argv[1], ios::in);
    if (in1.fail()) {
        cout << "Apertura di " << argv[1] << " fallita";
        exit(1);
    }

    in2.open(argv[2], ios::in);
    if (in2.fail()) {
        cout << "Apertura di " << argv[2] << " fallita";
        exit(1);
    }

    int max_len = 256;

    int len1;
    in1 >> len1;
    char **parole1 = new char*[len1];
    for (int i = 0; i < len1; i++) {
        parole1[i] = new char[max_len];
        in1 >> parole1[i];
    }

    in1.close();

    int len2;
    in2 >> len2;
    char **parole2 = new char*[len2];
    for (int i = 0; i < len2; i++) {
        parole2[i] = new char[max_len];
        in2 >> parole2[i];
    }

    in2.close();

    out.open(argv[3], ios::out);
    if (out.fail()) {
        cout << "Apertura di " << argv[3] << " fallita";
        exit(1);
    }

    for (int i = 0; i < len1; i++) {
        if (contiene(parole2, parole1[i], 0, len2)) {
            out << parole1[i] << endl;
        }
    }

    out.close();

    for (int i = 0; i < len1; i++) {
        delete[] parole1[i];
    }
    delete[] parole1;

    for (int i = 0; i < len2; i++) {
        delete[] parole2[i];
    }
    delete[] parole2;

    return 0;
}
