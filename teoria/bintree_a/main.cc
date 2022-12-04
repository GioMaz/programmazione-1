#include <iostream>
#include "bintree_a.h"

using namespace std;

// Abstract Data Types
// Binary tree (altezza = lunghezza massima rami compresa tra log2(n+1) e n)
int main() {
    albero a;
    init(a, 200);

    insert(a, 6);
    insert(a, 1);
    insert(a, 3);
    insert(a, 5);
    insert(a, 7);
    insert(a, 9);
    insert(a, 11);

    print(a);

    albero a1 = search(a, 9);
    // cout << a1->val << endl;
    cout << a1.v[a1.i] << endl;

    return 0;
}
