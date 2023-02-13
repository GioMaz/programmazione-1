#include <iostream>
#include <cmath>

using namespace std;

int pow(int n1, int n2) {
    int res = 1;
    for (int i = 1; i <= n2; i++) {
        res *= n1;
    }
    return res;
}

int main() {
    int a, n;
    cin >> a >> n;

    cout << pow(a, n) << endl;

    return 0;
}
