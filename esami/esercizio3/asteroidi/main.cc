#include <iostream>
#include "pila.h"

using namespace std;

int * collidiAsteroidi(int asteroidi[], int numeroAsteroidi, int & numeroAsteroidiRimasti);

int main() {
    
    // Potete modificare l'array di asteroidi (e la sua
    // dimensione) per testare la vostra soluzione
    int asteroidi [] = {11, -5, -12, 4, -6};
    int numeroAsteroidi = 5;


    int numeroAsteroidiRimasti;
    int * asteroidiRimasti = collidiAsteroidi(asteroidi, numeroAsteroidi, numeroAsteroidiRimasti);


    // La stampa dell'array dinamico degli
    // asteroidi rimasti avviene nel main
    for (int i = 0; i < numeroAsteroidiRimasti ; i++) {
        cout << asteroidiRimasti[i] << " ";
    }
    cout << endl;

    // La deallocazione dell'array dinamico 
    // degli asteroidi rimasti avviene nel main
    delete[] asteroidiRimasti;
}


// Implementare la funzione sottostante come da consegna:
// - ritornare un'array di interi allocato dinamicamente che 
//   contenga lo stato degli asteroidi dopo tutte le collisioni
// - assegnare a 'numeroAsteroidiRimasti' il numero di elementi 
//   nell'array ritornato
int * collidiAsteroidi(int asteroidi[], int numeroAsteroidi, int & numeroAsteroidiRimasti) {
    init();

    numeroAsteroidiRimasti = 0;
    for (int i = 0; i < numeroAsteroidi; i++) {
        int cur = asteroidi[i];
        if (cur < 0) {
            cur = -cur;
            int n;
            top(n);

            while (n < cur && !vuota() && n > 0) {
                pop();
                numeroAsteroidiRimasti--;
                top(n);
            }

            if (vuota() || n < 0) {
                push(-cur);
                numeroAsteroidiRimasti++;
            }
            else if (n == cur) {
                pop();
                numeroAsteroidiRimasti--;
            }
        }
        else {
            push(asteroidi[i]);
            numeroAsteroidiRimasti++;
        }
    }

    int *res = new int[numeroAsteroidiRimasti];
    int n;
    for (int i = numeroAsteroidiRimasti - 1; i >= 0; i--) {
        top(n);
        pop();
        res[i] = n;
    }

    return res;
}
