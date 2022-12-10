#include "queue_p.h"

int main() {
    queue_p q_p;
    init_p(q_p);

    message m1 = { "CIAO", 0 };
    enqueue_p(q_p, m1);
    message m2 = { "bruh", 3 };
    enqueue_p(q_p, m2);
    message m3 = { "iìsi", 9 };
    enqueue_p(q_p, m3);

    print_p(q_p);

    dequeue_p(q_p, m1);
    dequeue_p(q_p, m2);

    print_p(q_p);

    return 0;
}
