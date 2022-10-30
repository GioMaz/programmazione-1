#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // variabili collocate nell'heap
    int *p1 = new int (n); // puntatore a int di valore 5
    int *p2 = new int[n]; // puntatore a array lungo 5
    char *p3 = new char[n]; // puntatore a stringa lunga 5

    delete p1;
    delete[] p2;
    delete[] p3;
    return 0;
}
