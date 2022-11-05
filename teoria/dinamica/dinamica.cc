#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // variabili collocate nell'heap
    int *p1 = new int(n); // puntatore a int di valore n

    int *p2 = new int[n]; // puntatore a array lungo n

    char *p3 = new char[n]; // puntatore a stringa lunga n
    // *p3 = "Ciao";
    cout << *p3 << endl;

    delete p1;
    delete[] p2;
    delete[] p3;
    return 0;
}
