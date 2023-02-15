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

    int len = 0;
    while (partecipanti[len] != '\0') {
        enqueue(partecipanti[len]);
        len++;
    }

    int i = 0;
    bool finito = false;
    char cur;
    char next;
    while (first(cur) && !finito) {
        enqueue(cur);
        dequeue();
        first(next);
        if (cur != next) {
            dequeue();
            i = 0;
        }
        else {
            i++;
        }
        if (i == len) {
            finito = true;
        }
    }

    return cur;
}
