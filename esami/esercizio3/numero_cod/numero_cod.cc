#include <iostream>
#include <string.h> // definisce la funzione "int strlen (const char * array);"
#include <math.h>   // definisce la funzione "int pow (base, esponente);"
#include "pila.h"   // fare riferimento al file "pila.h" per le funzioni esposte

using namespace std;

int decodificaNumero(char numeroCodificato []);

int main() { 
    int dimensioneMassima = 9;
    char numeroCodificato [dimensioneMassima];
    cout << "Inserisci l'array: ";
    cin >> numeroCodificato;
    int decodifica = decodificaNumero(numeroCodificato);
    cout << "Decodifica: " << decodifica << endl;
}

int decodificaNumero(char numeroCodificato []) {
    init();

    int res = 0;
    int len = strlen(numeroCodificato);
    int esp = len;

    for (int i = 0; i <= len; i++) {
        push(i + 1);
        if (i == len || numeroCodificato[i] == 'I') {
            while (!vuota()) {
                int n;
                top(n);
                res += n * pow(10, esp);
                pop();
                esp--;
            }
        }
    }

    deinit();
    return res;
}
