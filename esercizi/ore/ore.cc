#include <iostream>

using namespace std;

void converti(int &secondi, int &minuti, int &ore);

int main() {
    int secondi, minuti, ore;
    secondi = 121;
    minuti = 59;
    ore = 2;
    cout << secondi << ' ' << minuti << ' ' << ore << endl;
    converti(secondi, minuti, ore);
    cout << secondi << ' ' << minuti << ' ' << ore << endl;
}

void converti(int &secondi, int &minuti, int &ore) {
    while (secondi > 60) {
        secondi -= 60;
        minuti++;
    }

    while (minuti > 60) {
        minuti -= 60;
        ore++;
    }

    ore += resto;
}