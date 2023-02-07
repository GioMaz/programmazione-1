#include "queue_p.h"

#include <iostream>
using namespace std;

int main() {
    queue_p q_p;
    init_p(q_p);

    message m1 = { 6, "primo messaggio" };
    enqueue_p(q_p, m1);

    message m2 = { 4, "secondo messaggio" };
    enqueue_p(q_p, m2);

    message m3 = { 3, "terzo messaggio" };
    enqueue_p(q_p, m3);

    print_p(q_p);

    dequeue_p(q_p);
    dequeue_p(q_p);

    print_p(q_p);

    return 0;
}
