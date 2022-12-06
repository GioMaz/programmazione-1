#ifndef QUEUE_P_H
#define QUEUE_P_H

#include "queue.h"
#include "message.h"

static const int MAX_PRIORITY = 10;

struct queue_p {
    queue v_p[MAX_PRIORITY];
};

void init_p(queue_p &);
void deinit_p(queue_p &);
void enqueue_p(queue_p &, message &);
void dequeue_p(queue_p &, message &);
void print_p(const queue_p &);

#endif
