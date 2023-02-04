#include <iostream>

using namespace std;

struct statico {
    int a[3];
};

struct dinamico {
    int *a;
};

int main() {
    statico s;
    s.a[0] = 0;
    s.a[1] = 1;
    s.a[2] = 2;

    statico s1;
    s1 = s; // con l'array statico avviene copia

    dinamico d;
    d.a = new int[3];
    d.a[0] = 0;
    d.a[1] = 1;
    d.a[2] = 2;

    dinamico d1;
    d1 = d; // con l'array dinamico avviene riferimento

    return 0;
}
