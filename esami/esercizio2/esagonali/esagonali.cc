#include <iostream>

using namespace std;

void esagonali_aux(int *array, int &dim, int &i) {
    if (i == dim) {
        return;
    }

    array[i] = i*((2*i) - 1);
    cout << array[i] << ' ';
    i++;
    esagonali_aux(array, dim, i);
}

void esagonali(int *array, int &dim) {
    int i = 0;
    esagonali_aux(array, dim, i);
}

int main() {
    int dim = 10;

    if (dim < 0) {
        return 1;
    }

    int *array = new int[dim];
    esagonali(array, dim);

    return 0;
}
