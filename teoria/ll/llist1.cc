#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo {
    int val;
    nodo *next;
};

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

    return 0;
}
