#include <iostream>

using namespace std;

int main() {
    int m = 5;
    int n = 4;
    int a[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % (m*n) + 1;
        }
    }

    int **at = new int*[n];
    for (int i = 0; i < n; i++) {
        at[i] = new int[m];
        for (int j = 0; j < m; j++) {
            at[i][j] = a[j][i];
        }
    }

    return 0;
}
