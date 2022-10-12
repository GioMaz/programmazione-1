#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    double res = 1;
    for (int i = 2; i < n; i++) {
        res += 1/((double)(i*i));
    }
    cout << sqrt(res*6) << endl;
}

// 1.6449
