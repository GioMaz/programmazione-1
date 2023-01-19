#include <iostream>

using namespace std;

static int *V;
static int I1;
static int I2;
static int DIM;

void init(int dim) {
    V = new int[dim];
    DIM = dim;
    I1 = 0;
    I2 = dim - 1;
}

bool vuotaP1() {
    return I1 == 0;
}

bool vuotaP2() {
    return I2 == DIM - 1;
}

// inserisci l'elemento 'valore' in P1
bool pushP1(int valore) {
    bool res = true;
    if (I1 == I2 + 1) {
        res = false;
    }
    else {
        V[I1] = valore;
        I1++;
    }
    return res;
}

// inserisci l'elemento 'valore' in P2
bool pushP2(int valore) {
    bool res = true;
    if (I2 == I1 - 1) {
        res = false;
    }
    else {
        V[I2] = valore;
        I2--;
    }
    return res;
}

// assegna al parametro il valore del primo 
// elemento di P1, se presente
bool topP1(int& valore) {
    bool res = true;
    if (vuotaP1()) {
        res = false;
    }
    else {
        valore = V[I1 - 1];
    }
    return res;
}

// assegna al parametro il valore del primo 
// elemento di P2, se presente
bool topP2(int& valore) {
    bool res = true;
    if (vuotaP2()) {
        res = false;
    }
    else {
        valore = V[I2 + 1];
    }
    return res;

}

// rimuovi il primo elemento di P1, se presente
bool popP1() {
    bool res = true;
    if (vuotaP1()) {
        res = false;
    }
    else {
        I1--;
    }
    return res;
}

// rimuovi il primo elemento di P2, se presente
bool popP2() {
    bool res = true;
    if (vuotaP2()) {
        res = false;
    }
    else {
        I2++;
    }
    return res;

}

void deinit() {
    delete[] V;
}

void print() {
    cout << "P1 = ";
    for (int i = 0; i < I1; i++) {
        cout << V[i] << ' ';
    }
    cout << endl << "P2 = ";
    for (int i = DIM - 1; i > I2; i--) {
        cout << V[i] << ' ';
    }
    cout << endl;
}
