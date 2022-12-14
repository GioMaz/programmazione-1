#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // try/catch
    int *p4 = new (nothrow) int[n];
    if (p4 == NULL) {
        cout << "Area di memoria esaurita" << endl;
    }

    // deallocazione (memory leak)
    // $ valgrind --leak-check=full ./a.out
    delete[] p4;

    return 0;
}
