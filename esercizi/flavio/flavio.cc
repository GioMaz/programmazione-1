#include <iostream>

using namespace std;

struct nodo {
    int val;
    nodo *next;
};

typedef nodo *lista;

lista inserisci(lista l, int m, int n) {
    if (l == NULL) {
        l = new nodo;
        l->val = n;
        l->next = l;
    }
    else {
        lista l1 = l;
        for (int i = 1; i < m; i++) {
            l1 = l1->next;
        }
        l1->next = new nodo;
        l1->next->val = n;
        l1->next->next = l;
    }
    return l;
}

lista creaLista(int n) {
    lista l = NULL;
    for (int i = 0; i < n; i++) {
        l = inserisci(l, i, i+1);
    }
    return l;
}

void stampaLista(lista l, int n) {
    for (int i = 0; i < n; i++) {
        cout << l->val << ' ';
        l = l->next;
    }
    cout << endl;
}

lista elimina(lista l, int m) {
    for (int i = 2; i < m; i++) {
        l = l->next;
    }

    lista tmp = l->next;
    l->next = l->next->next;
    delete tmp;

    return l->next;
}

lista giuseppeFlavio(lista l, int m) {
    while (l != l->next) {
        l = elimina(l, m);
        stampaLista(l, 10);
    }
    return l;
}

int main() {
    int n = 10;
    int m = 4;

    lista l = creaLista(n);
    stampaLista(l, n);

    l = giuseppeFlavio(l, 4);
    stampaLista(l, n);

    delete l;

    return 0;
}
