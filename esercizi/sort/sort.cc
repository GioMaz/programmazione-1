#include <iostream>
#include <climits>

using namespace std;

void swap(int &n1, int &n2);
void sort(int &n1, int &n2, int &n3);

int main() {
    int n1, n2, n3;
    n1 = 23;
    n2 = 42;
    n3 = 1;
    cout << n1 << ' ' << n2 << ' ' << n3 << endl;
    sort(n1, n2, n3);
    cout << n1 << ' ' << n2 << ' ' << n3 << endl;
    return 0;
}

void swap(int &n1, int &n2) {
    int n3 = n1;
    n1 = n2;
    n2 = n3;
}

void sort(int &n1, int &n2, int &n3) {
    if (n1 > n2) {
        swap(n1, n2);
    }
    if (n2 > n3) {
        swap(n2, n3);
    }
    if (n1 > n2) {
        swap(n1, n2);
    }
}