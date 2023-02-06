#include <iostream>
#include "bintree_a.h"

using namespace std;

// Abstract Data Types
// Binary tree (altezza = lunghezza massima rami compresa tra log2(n+1) e n)
int main() {
    tree t;
    init(t, 200);

    insert(t, 6);
    insert(t, 3);
    insert(t, 1);
    insert(t, 5);
    insert(t, 7);
    insert(t, 9);
    insert(t, 11);

    print(t);

    tree t1 = search(t, 9);
    // cout << t1->val << endl;
    cout << t1.v[t1.i] << endl;

    deinit(t);

    return 0;
}
