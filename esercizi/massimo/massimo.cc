#include <iostream>
#include <climits>

using namespace std;

int minimo(int n1, int n2, int n3, int n4, int n5);
int max(int n1, int n2);

int main() {
    cout << minimo(2, 4, 7, 1, 5) << endl;
}

int minimo(int n1, int n2=INT_MIN, int n3=INT_MIN, int n4=INT_MIN, int n5=INT_MIN) {
    int res = max(n1, n2);
    res = max(res, n3);
    res = max(res, n4);
    res = max(res, n5);
    return res;
}

int max(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    }
    else {
        return n2;
    }
}