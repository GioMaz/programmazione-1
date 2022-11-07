#include <iostream>

using namespace std;

// dichiarazione ricorsiva
struct nodo {
    int val;
    nodo *next;
};

// dichiarazione ricorsiva (doppia)
struct nodo2;
struct nodo1 {
    int val;
    nodo2 *next;
};
struct nodo2 {
    int val;
    nodo1 *next;
};

int main() {
    return 0;
}
