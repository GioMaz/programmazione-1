#include <iostream>

using namespace std;

int main() {
    // ALLOCAZIONE STATICA (STACK)
    // grandezza è fissa
    // grandi array (non si sa quante celle si utilizzeranno)

    // ALLOCAZIONE DINAMICA (HEAP)
    // grandezza definita a runtime
    // array con grandezza personalizzata

    int n;
    cin >> n;

    int *p1 = new int(n); // puntatore a int di valore n
    int *p2 = new int[n]; // puntatore a array lungo n
    char *p3 = new char[n]; // puntatore a stringa lunga n

    // deallocazione (memory leak)
    // $ valgrind --leak-check=full ./a.out
    delete p1;
    delete[] p2;
    delete[] p3;

    return 0;
}
