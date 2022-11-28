#include <iostream>
#include "bintree.h"

using namespace std;

// Abstract Data Types
// Binary tree
int main() {
    albero a;
    init(a);

    insert(a, 6);
    insert(a, 1);
    insert(a, 3);
    insert(a, 5);
    insert(a, 7);
    insert(a, 9);
    insert(a, 11);

    print(a);

    albero a1 = search(a, 9);
    cout << a1->val << endl;

    return 0;
}
