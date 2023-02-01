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
    int len = 10;
    int a[] = { 4, 6, 2, 1, 20, 39, 17, 1, 4, 6 };

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    bubble_sort(a, len);

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    return 0;
}