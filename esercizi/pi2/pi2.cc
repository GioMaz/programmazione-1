#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    double pi1, pi2 = -1;
    double val = 1;
    int i = 1;
    while (pi1 - pi2 >= n) {
        i++;
        val += 1/(double)(i*i);
        pi1 = pi2;
        pi2 = sqrt(val*6);
        cout << pi2 << endl;
    }
}

// 1.6449
