#include "isvalid.h"

bool isvalid(char *string) {
    int i = 0;
    bool valida = true;
    while (string[i] != '@' && string[i] != '\0' && valida) {
        if (i == 0 && string[i] == '.') {
            valida = false;
        }
        if (!(
            (string[i] >= 'a' && string[i] <= 'z') ||
            (string[i] >= 'A' && string[i] <= 'Z') ||
            (string[i] >= '0' && string[i] <= '9') ||
            string[i] == '.' ||
            string[i] == '_')) {
            valida = false;
        }
        i++;
    }

    if (i == 0) {
        valida = false;
    }

    if (i > 0 && string[i-1] == '.') {
        valida = false;
    }

    if (string[i] != '@') {
        valida = false;
    }

    int j = i + 1;
    while (string[j] != '\0' && valida) {
        if (j == i + 1 && string[j] == '.') {
            valida = false;
        }
        if (string[j] == '@') {
            valida = false;
        }
        if (!(
            (string[j] >= 'a' && string[j] <= 'z') ||
            (string[j] >= 'A' && string[j] <= 'Z') ||
            (string[j] >= '0' && string[j] <= '9') ||
            string[j] == '.' ||
            string[j] == '_')) {
            valida = false;
        }
        j++;
    }

    if (string[j-1] == '.') {
        valida = false;
    }

    if (j == i + 1) {
        valida = false;
    }

    return valida;
}
