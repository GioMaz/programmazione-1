#include <iostream>

using namespace std;

// O(n^2)
void insertion_sort(int *a, int len) {
    int tmp;
    for (int i = 1; i < len; i++) {
        tmp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > tmp) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tmp;
    }
}

int main() {
    int len = 10;
    int a[len];
    for (int i = 0; i < len; i++) {
        a[i] = rand() % len + 1;
    }

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    insertion_sort(a, len);

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    return 0;
}