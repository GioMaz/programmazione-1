#include <iostream>

using namespace std;

// O(n^2)
void bubble_sort(int *a, int len) {
    int tmp;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (a[j] > a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main() {
    int len = 99999;
    int a[len];
    for (int i = 0; i < len; i++) {
        a[i] = rand() % len + 1;
    }

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    bubble_sort(a, len);

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    return 0;
}