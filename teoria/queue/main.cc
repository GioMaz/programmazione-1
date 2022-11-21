#include <iostream>
#include "queue.h"

using namespace std;

// Abstract Data Types
// Queue (fila di persone con primo a sinistra) (First In First Out)
int main() {
    int d = 5;

    queue q;
    init(q, d);

    enqueue(q, 3);
    enqueue(q, 6);
    enqueue(q, 7);
    enqueue(q, 5);

    dequeue(q);
    dequeue(q);

    print(q);

    return 0;
}
