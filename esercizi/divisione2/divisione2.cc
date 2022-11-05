#include <iostream>

using namespace std;

void divisione_aux(int n1, int n2, int c);
void divisione(int n1, int n2);

int main() {
    divisione(20, 3);
    return 0;
}

void divisione(int n1, int n2) {
    divisione_aux(n1, n2, 0);
}

void divisione_aux(int n1, int n2, int c) {
    if ((c*n2)+n2 >= n1) {
        cout << "Quoziente: " << c << endl;
        cout << "Resto: " << -1*((c*n2)-n1) << endl;
        return;
    }

    divisione_aux(n1, n2, c+n2);
}
