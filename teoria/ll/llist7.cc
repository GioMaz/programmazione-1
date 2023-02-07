#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo {
    int val;
    nodo *next;
};

void insert_at(nodo *&n, int val, int pos) {
    nodo *n1 = n;

    int i;
    for (i = 0; i < pos && n1->next != NULL; i++) {
        n1 = n1->next;
    }

    nodo *n2 = new nodo;

    if (n1->next == NULL) {
        n2->val = val;
        n2->next = NULL;
    }
    else {
        n2->val = n1->val;
        n2->next = n1->next;
        n1->val = val;
    }

    n1->next = n2;
}


int main() {
    int len = 10;
    nodo *n = NULL;
    for (int i = 0; i < len; i++) {
        nodo *n1 = new nodo;
        n1->val = rand() % 100 + 1;
        n1->next = n;
        n = n1;
    }

    for (nodo *n1 = n; n1 != NULL; n1 = n1->next) {
        cout << n1->val << ' ';
    }
    cout << endl;

    int pos = 10;
    int val= 69;
    insert_at(n, val, pos);

    for (nodo *n1 = n; n1 != NULL; n1 = n1->next) {
        cout << n1->val << ' ';
    }
    cout << endl;

    return 0;
}
