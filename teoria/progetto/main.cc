#include <iostream>
#include "modulo1.h" // include automaticamente le definizioni
#include "modulo2.h"

using namespace std;

int main() {
    cout << funzione1(5, 10) << endl; // da "modulo1.h"
    cout << funzione3('y', 'z') << endl; // da "modulo2.h"
    return 0;
}
