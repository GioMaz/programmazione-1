#include <iostream>
#include "expression.h"

using namespace std;

int main() {
    expression exp;

    read_expression(exp);

    cout << "PRIMA STAMPA: ";
    print_expression(exp);
    cout << endl;

    evaluate_expression(exp);

    cout << "SECONDA STAMPA: ";
    print_expression(exp);
    cout << endl;

    return 0;
}
