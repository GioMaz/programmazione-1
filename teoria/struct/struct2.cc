#include <iostream>

using namespace std;

struct dinamico {
    int *array;
};

int main() {
    int n;
    cin >> n;

    dinamico d;
    d.array = new int[n];
    delete[] d.array;

    return 0;
}
