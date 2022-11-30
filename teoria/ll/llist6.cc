#include <iostream>
#include <fstream>

using namespace std;

struct nodo {
    int val;
    nodo *next;
};

typedef nodo *lista;

void distruggi(lista l) {
    if (l == NULL) {
        cout << endl;
        return;
    }

    cout << l->val << ' ';

    distruggi(l->next);

    delete l;
}

int main() {
    fstream in;
    in.open("F.txt", ios::in);
    if (in.fail()) {
        cout << "Errore nell'apertura del file";
        return 1;
    }

    int buffer;
    in >> buffer;

    lista l;
    lista nodoCorrente = new nodo;
    nodoCorrente->val = buffer;
    nodoCorrente->next = NULL;
    l = nodoCorrente;

    while (in >> buffer) {
        lista nodoNuovo = new nodo;
        nodoNuovo->val = buffer;
        nodoNuovo->next = NULL;
        nodoCorrente->next = nodoNuovo;
        nodoCorrente = nodoNuovo;
    }

    for (lista l1 = l; l1 != NULL; l1 = l1->next) {
        cout << l1->val << ' ';
    }
    cout << endl;

    distruggi(l);
    return 0;
}
