#include <iostream>
#include "queue_p.h"

void init_p(queue_p &q_p) {
    for (int i = 0; i < MAX_PRIORITY; i++) {
        init(q_p.v_p[i]);
    }
}

void deinit_p(queue_p &q_p) {
    for (int i = 0; i < MAX_PRIORITY; i++) {
        deinit(q_p.v_p[i]);
    }
}

bool enqueue_p(queue_p &q_p, message &m) {
    bool res;
    int priority = m.priority;
    if (priority >= 0 && priority < MAX_PRIORITY) {
        res = enqueue(q_p.v_p[priority], m);
    }
    else {
        res = false;
    }
    return res;
}

bool dequeue_p(queue_p &q_p, message &m) {
    bool res;
    int priority = m.priority;
    if (priority >= 0 && priority < MAX_PRIORITY) {
        res = dequeue(q_p.v_p[priority]);
    }
    else {
        res = false;
    }
    return res;
}

void print_p(const queue_p &q_p) {
    for (int i = 0; i < MAX_PRIORITY; i++) {
        print(q_p.v_p[i]);
    }
}
