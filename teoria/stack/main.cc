#include <iostream>
#include "stack.h"

using namespace std;

// Abstract Data Types
// Stack (pila di piatti) (Last In First Out)
int main() {
    int dim = 5;

    stack s;
    init(dim);

    for (int i = 0; i < dim; i++) {
        push(i);
    }

    print();

    for (int i = 0; i < dim/2; i++) {
        pop();
    }

    print();

    deinit();

    return 0;
}
