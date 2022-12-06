#include <iostream>

using namespace std;

bool palindroma_aux(int *a, int i, int j, bool res) {
    if (!res) {
        return res;
    }
    else if (i == j || i-j == 1 || j-i == 1) {
        return (a[i] == a[j]);
    }
    else {
        return palindroma_aux(a, i+1, j-1, (a[i] == a[j]));
    }
}

bool palindroma(int *a, int dim) {
    return palindroma_aux(a, 0, dim-1, true);
}

int main() {
    int dim;
    cout << "Inserire la dimensione dell'array: ";
    cin >> dim;

    if (dim > 100) {
        cout << "La grandezza massima consentita è di 100 elementi" << endl;
        return 1;
    }

    int *array = new int[dim];
    for (int i = 0; i < dim; i++) {
        cout << "Inserire il " << i+1 << "° elemento: ";
        cin >> array[i];
    }

    cout << palindroma(array, dim);

    delete[] array;

    return 0;
}
