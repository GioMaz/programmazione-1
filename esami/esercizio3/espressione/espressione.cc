#include <iostream>
#include "pila.h"

using namespace std;

char parseEspressioneBooleanaPrefissa(char espressione [], bool & corretta);

int main() { 

    int dimensioneMassima = 100;
    char espressioneBooleana [dimensioneMassima];
    bool corretta = true;
    char risultatoEspressione;

    cout << "Inserisci l'espressione: ";
    cin >> espressioneBooleana;

    risultatoEspressione = parseEspressioneBooleanaPrefissa(espressioneBooleana, corretta);

    if (corretta) {
        cout << "Risultato: " << risultatoEspressione << endl;
    }
    else {
        cout << "Espressione malformata" << endl;
    }
    
    return 0;
}

char donot(char c) {
    if (c == 'T') return 'F';
    else return 'T';
}

char doand(char c1, char c2) {
    if (c1 == 'T' && c2 == 'T') {
        return 'T';
    }
    else {
        return 'F';
    }
}

char parseEspressioneBooleanaPrefissa(char espressione [], bool & corretta) {
    int i = 0;
    while (espressione[i] != '\0') {
        push(espressione[i]);
        i++;
    }

    corretta = true;

    char next1 = 'N';
    char next2 = 'N';
    char c;
    while (!vuota() && corretta) {
        top(c);
        if (c == 'F' || c == 'T') {
            next2 = next1;
            next1 = c;
            pop();
        }
        else if (c == '!') {
            pop();
            if (next1 == 'N') corretta = false;
            push(donot(next1));
            next1 = next2;
        }
        else if (c == '&') {
            pop();
            if (next1 == 'N' || next2 == 'N') corretta = false;
            push(doand(next1, next2));
        }
    }

    return c;
}