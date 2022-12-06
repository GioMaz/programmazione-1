#ifndef MESSAGE_H
#define MESSAGE_H

const int MAX_DIM = 200;

struct message {
    char info[MAX_DIM];
    int priority;
};

void read_message(message &);
void print_message(const message &);

#endif
