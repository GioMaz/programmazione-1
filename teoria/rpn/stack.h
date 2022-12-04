#ifndef STACK_H
#define STACK_H

#include "entry.h"

void init();
void deinit();
void push(entry &e);
void pop();
void top(entry &e);
int length();
void print();

#endif
