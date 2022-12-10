#ifndef QUEUE_H
#define QUEUE_H

#include "message.h"

const int QUEUE_SIZE = 100;

struct queue {
    int t;
    int h;
    message v[QUEUE_SIZE];
};

void init(queue &);
void deinit(queue &);
bool enqueue(queue &, message &);
bool dequeue(queue &);
void print(const queue &);

#endif
