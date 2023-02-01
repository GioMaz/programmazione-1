#include <stdio.h>
#include <iostream>

using namespace std;

// O(n^2)
void selection_sort(int *a, int len) {
    int temp;
    for (int i = 0; i < len - 1; i++) {
        int min = i;
        for (int j = i; j < len; j++) {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}

int main() {
    int len = 10;
    int a[] = { 4, 6, 2, 1, 20, 39, 17, 1, 4, 6 };

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    selection_sort(a, len);

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    return 0;
}