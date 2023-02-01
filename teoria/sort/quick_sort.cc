#include <iostream>

using namespace std;

int partition(int *a, int low, int high) {
    int low1 = low - 1;
    int high1 = high - 1;

    int tmp;
    for (int i = low; i < high; i++) {
        if (a[i] <= a[high]) {
            low1++;
            tmp = a[low1];
            a[low1] = a[i];
            a[i] = tmp;
        }
    }

    tmp = a[low1+1];
    a[low1+1] = a[high];
    a[high] = tmp;

    return low1+1;
}

// O(nlogn)
void quick_sort(int *a, int low, int high) {
    if (low < high) {
        int pivot = partition(a, low, high);
        quick_sort(a, low, pivot - 1);
        quick_sort(a, pivot + 1, high);
    }
}

int main() {
    int len = 10;
    int a[] = { 4, 6, 2, 1, 20, 39, 17, 1, 4, 6 };

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    quick_sort(a, 0, len);

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    return 0;
}