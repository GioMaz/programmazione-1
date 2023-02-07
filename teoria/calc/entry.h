#ifndef ENTRY_H
#define ENTRY_H

using namespace std;

enum type { NUMBER, OPERATOR, OPENP, CLOSEP };
enum op { PLUS, MINUS, TIMES, DIVIDE };
const int MAX_DIM = 16;

struct entry {
    type t;
    op o;
    double n;
};

bool isnumber(const entry &);
bool isoperator(const entry &);
bool isopenp(const entry &);
bool isclosep(const entry &);

entry evaluate_entry(const entry &, const entry &, const entry &);

void read_entry(entry &);
void print_entry(const entry &);

#endif
