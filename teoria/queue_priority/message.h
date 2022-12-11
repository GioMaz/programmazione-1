#ifndef MESSAGE_H
#define MESSAGE_H

const int MAX_DIM = 200;
const int QUEUE_SIZE = 100;
const int MAX_PRIORITY = 10;

struct message {
    int priority;
    char info[MAX_DIM];
};

void read_message(message &);
void print_message(const message &);

#endif
