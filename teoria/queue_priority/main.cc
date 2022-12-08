#include <iostream>
#include "queue_p.h"

using namespace std;

int main() {
    queue_p q;
    init_p(q);

    message m1 = { "CIAO", 10 };
    enqueue_p(q, m1);
    message m2 = { "bruh", 4};
    enqueue_p(q, m2);
    message m3 = { "iìsi", 1};
    enqueue_p(q, m3);

    // dequeue(q);
    // dequeue(q);

    print_p(q);

    return 0;
}
