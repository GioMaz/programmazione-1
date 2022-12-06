#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    int r1, r2;
    r1 = rand()%6 + 1;
    r2 = rand()%6 + 1;

    if (r1 > r2)
        cout << "Vince l'attaccante" << endl;
    else if (r2 > r1)
        cout << "Vince il difensore" << endl;
    else
        cout << "Pareggio" << endl;
}
