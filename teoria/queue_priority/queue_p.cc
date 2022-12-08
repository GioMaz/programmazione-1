#include "queue_p.h"
#include "queue.h"
#include <iostream>

using namespace std;

void init_p(queue_p &q) {
    for (int i = 0; i < MAX_PRIORITY; i++) {
        init(q.v_p[i]);
    }
}

void deinit_p(queue_p &q) {
    for (int i = 0; i < MAX_PRIORITY; i++) {
        deinit(q.v_p[i]);
    }
}

void enqueue_p(queue_p &q, message &m) {
    int priority = m.priority;
    if (priority >= 0 && priority <= MAX_PRIORITY) {
        enqueue(q.v_p[priority], m);
        // cout << q.v_p[priority].v[0].info << endl;
    }
}

void dequeue_p(queue_p &q, message &m) {
    int priority = m.priority;
    if (priority >= 0 && priority <= MAX_PRIORITY) {
        dequeue(q.v_p[priority]);
    }
}

void print_p(const queue_p &q) {
    cout << "ECCOME" << endl;
    for (int i = 0; i < MAX_PRIORITY; i++) {
        print(q.v_p[i]);
    }
}
