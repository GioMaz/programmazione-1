#include <iostream>

using namespace std;

enum giorno { LUN, MAR, MER, GIO, VEN, SAB, DOM };
enum colore { GIALLO=10, ROSSO=15, BLU=20 };

int main() {
    giorno g = MER;
    cout << g << endl;

    colore c = GIALLO;
    cout << c << endl;

    return 0;
}
