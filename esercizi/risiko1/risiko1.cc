#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    int r1, r2, r3, r4;
    r1 = rand()%6 + 1;
    r2 = rand()%6 + 1;
    r3 = rand()%6 + 1;
    r4 = rand()%6 + 1;

    int m1 = max(r1, r2);
    int m2 = max(r3, r4);

    if (m1 > m2)
        cout << "Vince l'attaccante" << endl;
    else if (m2 > m1)
        cout << "Vince il difensore" << endl;
    else
        cout << "Pareggio" << endl;

    return 0;
}
