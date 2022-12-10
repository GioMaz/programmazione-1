#include "queue.h"

static int next(int i) {
    return (i + 1) % QUEUE_SIZE;
}

static bool isfull(const queue &q) {
    return (next(q.t) == q.h);
}

static bool isempty(const queue &q) {
    return (q.t == q.h);
}

void init(queue &q) {
    q.t = 0;
    q.h = 0;
};

void deinit(queue &q) {
}

bool enqueue(queue &q, message &m) {
    bool res = true;
    if (!isfull(q)) {
        q.v[q.t] = m;
        q.t = next(q.t);
    }
    else {
        res = false;
    }
    return res;
}

bool dequeue(queue &q) {
    bool res = true;
    if (!isempty(q)) {
        q.h = next(q.h);
    }
    else {
        res = false;
    }
    return res;
}

void print(const queue &q) {
    for (int i = q.h; i != q.t; i = next(i)) {
        print_message(q.v[i]);
    }
}
