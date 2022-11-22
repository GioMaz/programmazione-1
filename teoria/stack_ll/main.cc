#include <iostream>
#include "stack_ll.h"

using namespace std;

// Abstract Data Types
// Stack (pila di piatti) (Last In First Out)
int main() {
    int d = 5;

    stack s;
    init(s, d);

    for (int i = 0; i < d; i++) {
        push(s, i);
    }

    print(s);

    for (int i = 0; i < d/2; i++) {
        pop(s);
    }

    print(s);

    deinit(s);

    return 0;
}
