#ifndef ENTRY_H
#define ENTRY_H

using namespace std;

enum type { NUMBER, OPERATOR, OFF };
enum op { PLUS, MINUS, TIMES, DIVIDE };
const int MAX_DIM = 100;

struct entry {
    type type;
    op op;
    double n;
};

bool isoff(const entry &);
bool isnumber(const entry &);
void read(entry &);
void print(const entry &);
entry calcola(const entry &, const entry &, const entry &);

#endif
