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

    int i = 0;
    while (numeroCodificato[i] != '\0') {
        push(i+1);
        if (numeroCodificato[i] == 'I') {
            int n;
            top(n);
            while (!vuota()) {
                res += n;
                res *= 10;
                pop();
                top(n);
            }
        }
        i++;
    }

    push(i+1);
    int n;
    while (!vuota()) {
        top(n);
        pop();
        res += n;
        res *= 10;
    }

    res /= 10;

    return res;
}
