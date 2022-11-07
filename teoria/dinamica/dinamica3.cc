#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    // matrice dinamica (array di puntatori di array)
    //     { 0x123 0x246 0x369 }
    //         |     |     |
    //       {0,1} {4,2} {7,8}
    //
    // non è detto che le righe siano consecutive in memoria
    int **M = new int*[n1];
    for (int i = 0; i < n1; i++) {
        M[i] = new int[n2];
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            M[i][j] = 0;
        }
    }
}
