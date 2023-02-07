#include <iostream>
#include "tree.h"
#include "persona.h"

using namespace std;

int main() {
    tree t;
    init(t);

    persona *p1 = create("Giulio", "Cesare", "Roma", 49);
    persona *p2 = create("Elio", "Adriano", "Roma", 117);
    persona *p3 = create("Marco", "Aurelio", "Roma", 161);

    insert(t, p1);
    insert(t, p2);
    insert(t, p3);

    print_tree(t);

    deinit(t);

    return 0;
}
