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

    char buffer[10];

    lista n = NULL;
    while (in >> buffer) {
        lista n1 = new nodo;
        n1->val = atoi(buffer);
        n1->next = n;
        n = n1;
    }

    for (lista l1 = n; l1 != NULL; l1 = l1->next) {
        cout << l1->val << ' ';
    }
    cout << endl;

    distruggi(n);
    return 0;
}
