#include <iostream>
#include "queue.h"

using namespace std;

// Abstract Data Types
// Queue (fila di persone con primo a sinistra) (First In First Out)
int main() {
    int d = 5;

    init(d);

    enqueue(3);
    enqueue(6);
    enqueue(7);
    enqueue(5);
    
    print();

    dequeue();
    dequeue();

    print();

    return 0;
}
