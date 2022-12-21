#include <iostream>
#include "pila.h"


using namespace std;


/**
 * Ricordare che il file "pila.h" contiene la definizione della struct "cella" (qui sotto riportata)
 * 
 * struct cella {
 *   int indiceRiga;
 *   int indiceColonna;
 * };
 */

void push_c(int i, int j) {
    cella c;
    c.indiceRiga = i;
    c.indiceColonna = j;
    push(c);
}

void risolviLabirinto(int [][5], int, int);

void risolviLabirinto(int m[][5], int x, int y) {
    bool visitato[5][5] = {{ false }};
    visitato[0][0] = true;
    init();

    cella c1;
    c1.indiceRiga = 0;
    c1.indiceColonna = 0;
    push(c1);

    bool origine = false;
    int i = 0;
    int j = 0;
    while ((i != x || j != y) && !origine) {
        if (i != 0 && !visitato[i-1][j] && m[i-1][j] != 0) {
            i--;
            push_c(i, j);
            visitato[i][j] = true;
            origine = false;
        }
        else if (i != 4 && !visitato[i+1][j] && m[i+1][j] != 0) {
            i++;
            push_c(i, j);
            visitato[i][j] = true;
            origine = false;
        }
        else if (j != 0 && !visitato[i][j-1] && m[i][j-1] != 0) {
            j--;
            push_c(i, j);
            visitato[i][j] = true;
            origine = false;
        }
        else if (j != 4 && !visitato[i][j+1] && m[i][j+1] != 0) {
            j++;
            push_c(i, j);
            visitato[i][j] = true;
            origine = false;
        }
        else {
            if (i == 0 && j == 0) {
                origine = true;
            }
            pop();
            cella c;
            top(c);
            i = c.indiceRiga;
            j = c.indiceColonna;

        }
    }

    cella c;
    while (top(c)) {
        cout << "labirinto[" << c.indiceRiga << "][" << c.indiceColonna << "] ";
        pop();
    }
}

int main(int argc, char* argv[]) {

    // Se modificate la funzione "main", ricordarsi poi di ripristinare il codice originale  

    // E' possibile modificare la matrice per effettuare dei test   
    int labirinto[5][5] = {
        { 1, 0, 1, 1, 0 },
        { 1, 1, 1, 0, 1 },
        { 0, 1, 0, 1, 1 },
        { 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1 }
    };

    // E' possibile modificare la cella di arrivo per effettuare dei test (la cella di partenza invece è sempre [0,0])   
    cout<<"Percorso: ";
    risolviLabirinto(labirinto, 4, 2);
   
    return 0;
}
