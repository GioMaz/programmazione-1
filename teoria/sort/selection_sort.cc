#include <iostream>

using namespace std;

// O(n^2)
void selection_sort(int *a, int len) {
    int tmp;
    for (int i = 0; i < len - 1; i++) {
        int min = i;
        for (int j = i; j < len; j++) {
            if (a[j] < a[min])
                min = j;
        }
        tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
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

    selection_sort(a, len);

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    return 0;
}