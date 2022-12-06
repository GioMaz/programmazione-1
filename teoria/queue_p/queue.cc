#include <iostream>
#include "queue.h"

using namespace std;

static int next(int i) {
    return (i + 1) % QUEUE_SIZE;
}

bool isfull(const queue &q) {
    return (next(q.t) == q.h);
}

bool isempty(const queue &q) {
    return (q.t == q.h);
}

void init(queue &q) {
    q.t = 0;
    q.h = 0;
};

void deinit(queue &q) {
}

void enqueue(queue &q, message m) {
    if (isfull(q)) {
        q.v[q.t] = m;
        q.t = next(q.t);
    }
}

void dequeue(queue &q) {
    if (!isempty(q)) {
        q.h = next(q.h);
    }
}

message first(const queue &q) {
    return q.v[q.h];
}

void print(const queue &q) {
    cout << q.h << endl;
    cout << q.t << endl;
    for (int i = q.h; i != q.t; i = next(i)) {
        print_message(q.v[i]);
    }
}
