#ifndef QUEUE_H
#define QUEUE_H

#include "message.h"

static const int QUEUE_SIZE = 100;

struct queue {
    int t;
    int h;
    message v[QUEUE_SIZE];
};

bool isempty(const queue &);
bool isfull(const queue &);
void init(queue &);
void deinit(queue &);
void enqueue(queue &, message);
void dequeue(queue &);
message first(const queue &);
void print(const queue &);

#endif
