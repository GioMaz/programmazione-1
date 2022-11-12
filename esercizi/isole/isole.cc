#include <iostream>
#include <cstdlib>

using namespace std;

const int M = 5;
const int N = 5;

int isole(int A[][N]) {
    int res = 0;
    bool isola = true;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i][j] == 0) {
                isola = false;
            }

            if (i != 0) {
                if (j != 0 && A[i-1][j-1] == 1) isola = false;
                if (A[i-1][j] == 1) isola = false;
                if (j != N - 1 && A[i-1][j+1] == 1) isola = false;
            }

            if (j != 0) {
                if (A[i][j-1] == 1) isola = false;
            }

            if (j != N - 1) {
                if (A[i][j+1] == 1) isola = false;
            }

            if (i != M - 1) {
                if (j != 0 && A[i+1][j-1] == 1) isola = false;
                if (A[i+1][j] == 1) isola = false;
                if (j != N - 1 && A[i+1][j+1] == 1) isola = false;
            }

            if (isola) res++;

            isola = true;
        }
    }
    return res;
}

void riempi(int A[][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 2;
        }
    }
}

int main() {
    srand(time(NULL));
    int A[M][N];
    riempi(A);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }

    cout << isole(A) << endl;

    return 0;
}
