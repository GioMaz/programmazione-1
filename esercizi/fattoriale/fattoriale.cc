#include <iostream>
#include <cmath>

using namespace std;

int fatt(int a) {
    if (a == 0)
        return 1;
    else
        return a*fatt(a - 1);
}

int main() {
    int a = 4;
    cout << fatt(a) << endl;
}
