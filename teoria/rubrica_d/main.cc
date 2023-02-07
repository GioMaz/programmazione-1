#include <iostream>
#include "tree_d.h"
#include "persona.h"

using namespace std;

int main() {
    tree_d t;
    init(t);

    persona *p1 = create("Giulio", "Cesare", "Roma", 49);
    persona *p2 = create("Elio", "Adriano", "Roma", 117);
    persona *p3 = create("Marco", "Aurelio", "Roma", 161);

    insert(t, p1);
    insert(t, p2);
    insert(t, p3);

    print_cognome(t);
    print_nome(t);

    tree t1 = search_cognome(t, "Aurelio");
    if (t1 != NULL) {
        print(t1->p);
    }

    deinit(t);

    return 0;
}
