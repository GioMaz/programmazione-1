#include <iostream>

using namespace std;

// O(nlogn)
void merge_sort(int *a, int n1, int n2) {
    if (n2 - n1 <= 1) {
        return;
    }
    int n = n1 + ((n2 - n1) / 2);
    merge_sort(a, n1, n);
    merge_sort(a, n, n2);
    merge(a, n1, n, n2);
}

void merge(int *a, int n1, int n, int n2) {
    int i = n1;
    int j = n;
    int k = 0;

    while (i <= n && j <= n2) {
        if (a[i] <= a[j]) {
            a[k] = a[i];
            i++;
        }
        else {
            a[k] = a[i];
            j++;
        }
        k++;
    }

    while (i <= n) {
        a[k] = a[i];
        i++;
        k++;
    }

    while (j <= n2) {
        a[k] = a[j];
        j++;
        k++;
    }
}

int main() {
    int len = 10;
    int a[] = { 4, 6, 2, 1, 20, 39, 17, 1, 4, 6 };

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    merge_sort(a, 0, len);

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    return 0;
}