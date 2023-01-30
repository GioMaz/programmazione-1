#include <iostream>

using namespace std;

static int tailS1;
static int headS1;
static int tailS2;
static int headS2;
static int dim;
static int *v;

// inizializza la coda e altri valori rilevanti, se necessario
void init() {
    tailS1 = 0;
    headS1 = 0;
    tailS2 = 10;
    headS2 = 10;
    dim = 11;
    v = new int[11];
}

bool isemptyS1() {
    bool res = false;
    if (tailS1 == headS1) {
        res = true;
    }
    return res;
}

bool isemptyS2() {
    bool res = false;
    if (tailS2 == headS2) {
        res = true;
    }
    return res;
}

bool isfull() {
    bool res = false;
    if (tailS1 == headS2) {
        res = true;
    }
    return res;
}

// inserimento di un elemento nella sotto-coda con meno elementi
bool enqueue(int n) {
    bool res = true;
    if (!isfull()) {
        int dimS1 = tailS1 - headS1;
        int dimS2 = headS2 - tailS2;
        if (dimS2 < dimS1) {
            v[tailS2] = n;
            tailS2--;
        }
        else {
            v[tailS1] = n;
            tailS1++;
        }
    }
    else {
        res = false;
    }
    return res;
}

// assegna al parametro (passato per riferimento) il valore del primo elemento della sotto-coda del primo sportello
bool firstS1(int &n) {
    bool res = true;
    if (!isemptyS1()) {
        n = v[headS1];
    }
    else {
        res = false;
    }
    return res;
}

// assegna al parametro (passato per riferimento) il valore del primo elemento della sotto-coda del secondo sportello
bool firstS2(int &n) {
    bool res = true;
    if (!isemptyS2()) {
        n = v[headS2];
    }
    else {
        res = false;
    }
    return res;
}

// rimuove il primo elemento della sotto-coda del primo sportello
bool dequeueS1() {
    bool res = true;
    if (!isemptyS1()) {
        for (int i = headS1; i < tailS1; i++) {
            v[i] = v[i+1];
        }
        tailS1--;
    }
    else {
        res = false;
    }
    return res;
}

// rimuove il primo elemento della sotto-coda del secondo sportello
bool dequeueS2() {
    bool res = true;
    if (!isemptyS2()) {
        for (int i = headS2; i > tailS2; i--) {
            v[i] = v[i-1];
        }
        tailS2++;
    }
    else {
        res = false;
    }
    return res;
}

// de-inizializza la coda e dealloca eventuale memoria dinamica, se necessario
void deinit() {
    delete[] v;
}

// stampa a video tutti gli elementi delle due sotto-code
void print() {
    cout << "S1: ";
    for (int i = headS1; i < tailS1; i++) {
        cout << v[i] << ' ';
    }
    cout << endl << "S2: ";
    for (int i = headS2; i > tailS2; i--) {
        cout << v[i] << ' ';
    }
    cout << endl;
}
