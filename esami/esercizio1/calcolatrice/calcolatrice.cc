#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int to_decimal(char n[]) {
    int max_len = 100;

    int i = 0;
    int cur = 1;
    int res1[max_len];
    while (n[i] != '\0') {
        if (n[i] >= 'A' && n[i] <= 'G') {
            cur = 10 + n[i] - 'A';
        }
        else if (n[i] >= '0' && n[i] <= '9'){
            cur = n[i] - '0';
        }

        res1[i] = cur;

        i++;
    }

    int res = 0;
    int index = i - 1;
    for (int j = 0; j < i; j++) {
        int pow = 1;
        for (int k = 1; k <= index; k++) {
            pow *= 17;
        }
        res += res1[j]*pow;
        index--;
    }

    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cout << "Sono necessari almeno 3 argomenti" << endl;
        return 1;
    }

    fstream in, out;
    in.open(argv[1], ios::in);
    if (in.fail()) {
        cout << "Apertura di " << argv[2] << " fallita" << endl;
        return 1;
    }

    out.open(argv[2], ios::out);
    if (out.fail()) {
        cout << "Apertura di " << argv[2] << " fallita" << endl;
        return 1;
    }

    char n1[100];
    char n2[100];
    char op;
    while (!in.eof()) {
        in >> n1;
        in >> op;
        in >> n2;
        switch (op) {
            case '+': out << to_decimal(n1) + to_decimal(n2) << endl; break;
            case '-': out << to_decimal(n1) - to_decimal(n2) << endl; break;
            case '*': out << to_decimal(n1) * to_decimal(n2) << endl; break;
            case '/': out << to_decimal(n1) / to_decimal(n2) << endl; break;
            case '^': out << pow(to_decimal(n1), to_decimal(n2)) << endl; break;
            default: break;
        }
    }

    in.close();
    out.close();

    return 0;
}
