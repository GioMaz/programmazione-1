#include <iostream>
#include "queue.h"

using namespace std;

int calcolaVincitore(int partecipanti[], int numeroPartecipanti, int salto);

int main() {
    int n = 10;
    int m = 4;
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    int vincitore = calcolaVincitore(a, n, m);

    cout << vincitore << endl;

    return 0;
}

int calcolaVincitore(int partecipanti[], int numeroPartecipanti, int salto) {
    init(numeroPartecipanti);

    for (int i = 0; i < numeroPartecipanti; i++) {
        enqueue(partecipanti[i]);
    }

    int i = 0;
    int n;
    while (i < numeroPartecipanti - 1) {
        print();
        for (int j = 0; j < salto - 1; j++) {
            first(n);
            dequeue();
            enqueue(n);
        }
        dequeue();
        i++;
    }

    print();
    first(n);

    deinit();

    return n;
}
