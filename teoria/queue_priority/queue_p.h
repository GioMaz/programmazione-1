#ifndef QUEUE_P_H
#define QUEUE_P_H

#include "queue.h"

struct queue_p {
    queue v_p[MAX_PRIORITY];
};

void init_p(queue_p &);
void deinit_p(queue_p &);
bool enqueue_p(queue_p &, message &);
bool dequeue_p(queue_p &, message &);
void print_p(const queue_p &);

#endif
