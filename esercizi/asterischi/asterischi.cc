#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Sono necessari almeno 2 argomenti" << endl;
        return 1;
    }

    fstream in;
    in.open(argv[1], ios::in);
    if (in.fail()) {
        cout << "Apertura del file " << argv[1] << " fallilta" << endl;
        return 1;
    }

    int numeri[10];
    char c;
    int i = 0;
    bool succ = false;
    int dim = 0;
    while (in.get(c)) {
        if (c == '*') {
            succ = false;
            numeri[i]++;
        }
        else {
            if (!succ) {
                i++;
                succ = true;
                dim++;
            }
        }
    }

    in.close();

    double res = 0;
    for (int j = 0; j < dim; j++) {
        res += numeri[j];
    }

    res /= dim;

    fstream app;
    app.open(argv[1], ios::app);
    if (app.fail()) {
        cout << "Apertura del file " << argv[1] << " fallilta" << endl;
        return 1;
    }

    app << endl;
    for (int j = 0; j < res; j++) {
        app << '*';
    }

    app.close();

    return 0;
}
