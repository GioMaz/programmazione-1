#include <iostream>

using namespace std;

void merge(int *a, int n1, int n, int n2) {
    int i = n1;
    int j = n + 1;
    int k = 0;
    int *b = new int[n2-n1+1];

    while (i <= n && j <= n2) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        }
        else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= n) {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= n2) {
        b[k] = a[j];
        j++;
        k++;
    }

    for (k = n1; k <= n2; k++) {
        a[k] = b[k-n1];
    }

    delete[] b;
}

// O(nlogn)
void merge_sort(int *a, int n1, int n2) {
    if (n1 == n2) {
        return;
    }
    int n = (n1 + n2) / 2;
    merge_sort(a, n1, n);
    merge_sort(a, n+1, n2);
    merge(a, n1, n, n2);
}

int main() {
    int len = 99999;
    int a[len];
    for (int i = 0; i < len; i++) {
        a[i] = rand() % len + 1;
    }

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    merge_sort(a, 0, len-1);

    for (int i = 0; i < len; i++) cout << a[i] << ' ';
    cout << endl;

    return 0;
}