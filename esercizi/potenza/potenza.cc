#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, n;
    cin >> a >> n;

    int sol = 1;
    for (int i = 1; i <= n; i++) {
        sol *= a;
        cout << sol << endl;
    }

    return 0;
}
