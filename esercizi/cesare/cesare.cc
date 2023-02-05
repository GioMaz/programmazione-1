#include "cesare.h"

void crypt(char *parola, int chiave) {
    int i = 0;
    while (parola[i] != '\0') {
        parola[i] += chiave;
        i++;
    }
}

void decrypt(char *parola, int chiave) {
    int i = 0;
    while (parola[i] != '\0') {
        parola[i] -= chiave;
        i++;
    }
}
