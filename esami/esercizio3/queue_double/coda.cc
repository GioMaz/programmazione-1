// Inserisci qui il codice implementazione delle funzioni in coda.h
/*
    Mancano tutti i controlli su dove inserire un elemento
    Dovevi implementare SOLO le funzioni presenti in coda.h senza aggiungerne di nuove
*/
#include <iostream>
using namespace std;

struct queue {
    int dim, t1, h1, t2, h2;
    int *v;
};

queue q;

int clientiS1() { // manca il return
    int res;
    if (q.t1 < q.h1) {
        res = (q.dim/2) - q.h1 + q.t1;
    }
}

int next(int i) {
    return (i + 1) % q.dim/2;
    // if (i < q.dim/2)
    //     return (i + 1) % q.dim/2;

    // return ((i + 1) % q.dim) + q.dim/2;
}

// inizializza la coda e altri valori rilevanti, se necessario
void init() {
    q.dim = 11;
    q.t1 = 0;
    q.h1 = 0;
    q.t2 = q.dim/2;
    q.h2 = q.dim/2;
    q.v = new int[q.dim];
}


// ---h----t--
// ---h-----t-
// ---h------t
// t--h-------
// inserimento di un elemento nella sotto-coda con meno elementi
bool enqueue(int n) {
    q.v[q.t1] = n;
    q.t1 = next(q.t1);
    cout << "t1 " << q.t1 << endl;

    return true;
}

// assegna al parametro (passato per riferimento) il valore del primo elemento della sotto-coda del primo sportello
bool firstS1(int&) {
}

// assegna al parametro (passato per riferimento) il valore del primo elemento della sotto-coda del secondo sportello
bool firstS2(int&) {
}

// rimuove il primo elemento della sotto-coda del primo sportello
bool dequeueS1() {
}

// rimuove il primo elemento della sotto-coda del secondo sportello
bool dequeueS2() {
}

// de-inizializza la coda e dealloca eventuale memoria dinamica, se necessario
void deinit() {
}

// stampa a video tutti gli elementi delle due sotto-code
void print() {
    for (int i = q.v[q.t1]; i < q.v[q.h1]; i++) {
        cout << q.v[i] << ' ';
    }
    cout << endl;
    for (int i = q.v[q.t2]; i < q.v[q.h2]; i++) {
        cout << q.v[i] << ' ';
    }
}
