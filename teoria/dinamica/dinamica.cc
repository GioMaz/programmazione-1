#include <iostream>

using namespace std;

int main() {
    // ALLOCAZIONE STATICA (STACK)
    // grandezza è fissa

    // ALLOCAZIONE DINAMICA (HEAP)
    // grandezza viene definita a runtime
    // viene usata per evitare di creare array grandi ed utilizzare solo una piccola parte di essi
    // può causare memory leak

    int n;
    cin >> n;

    int *p1 = new int(n); // puntatore a int di valore n
    int *p2 = new int[n]; // puntatore a array lungo n
    char *p3 = new char[n]; // puntatore a stringa lunga n

    delete p1;
    delete[] p2;
    delete[] p3;

    // try/catch
    int *p4 = new (nothrow) int[n];
    if (p4 == NULL)
        cout << "Area di memoria esaurita" << endl;

    delete[] p4;

    return 0;
}
