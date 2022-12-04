#include <iostream>
#include "entry.h"
#include "stack.h"
#include "rpn.h"

int calcolatore() {
    entry e1, e2, e3;

    init();

    do {
        print();
        read(e3);

        if (isoff(e3)) {
            // OFF
        }
        else if (isnumber(e3)) {
            // NUMERO
            push(e3);
        }
        else if (length() < 2) {
            // OPERATORE (meno di 2 operandi)
        }
        else {
            // OPERATORE (almeno di 2 operandi)
            top(e2);
            pop();
            top(e1);
            pop();
            entry e = calcola(e1, e2, e3);
            push(e);
        }
    } while (!isoff(e3));

    deinit();

    return 0;
}
