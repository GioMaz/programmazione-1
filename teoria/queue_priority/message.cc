#include <iostream>
#include "message.h"

using namespace std;

void read_message(message &m) {
    cin >> m.priority;
    cin >> m.info;
}

void print_message(const message &m) {
    cout << m.priority << ": " << m.info << endl;
}
