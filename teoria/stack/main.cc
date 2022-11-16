#include <iostream>
#include "stack.h"

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

    for (int i = 0; i < d; i++) {
        print(s, i);
    }

    for (int i = 0; i < d; i++) {
        pop(s);
    }

    for (int i = 0; i < d; i++) {
        print(s, i);
    }


    deinit(s);

    return 0;
}
