#include <iostream>
#include "queue.h"

using namespace std;

char calcolaVincitore(char partecipanti[]);

int main() {
    char partecipanti[] = "DDRRR";

    char vincitore = calcolaVincitore(partecipanti);

    cout << vincitore << endl;

    return 0;
}

char calcolaVincitore(char partecipanti[]) {
    init(0);

    int d = 0;
    int r = 0;
    int len = 0;
    while (partecipanti[len] != '\0') {
        if (partecipanti[len] == 'D') {
            d++;
        }
        else {
            r++;
        }
        enqueue(partecipanti[len]);
        len++;
    }

    int d_rimuovere = 0;
    int r_rimuovere = 0;
    char c;
    while (d != 0 && r != 0) {
        first(c);
        dequeue();
        if (c == 'D') {
            if (d_rimuovere == 0) {
                enqueue(c);
                r_rimuovere++;
            }
            else {
                d_rimuovere--;
                d--;
            }
        }
        else {
            if (r_rimuovere == 0) {
                enqueue(c);
                d_rimuovere++;
            }
            else {
                r_rimuovere--;
                r--;
            }
        }
    }

    deinit();

    if (d) {
        return 'D';
    }
    else {
        return 'R';
    }
}
