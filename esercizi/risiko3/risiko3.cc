#include <iostream>
#include <cstdlib>

using namespace std;

int min(int n1, int n2, int n3);
int max(int n1, int n2, int n3);
int medio(int n1, int n2, int n3);

int main() {
    srand(time(NULL));
    int a1, a2, a3;
    a1 = rand()%6 + 1;
    a2 = rand()%6 + 1;
    a3 = rand()%6 + 1;

    int b1, b2, b3;
    b1 = rand()%6 + 1;
    b2 = rand()%6 + 1;
    b3 = rand()%6 + 1;

    int min1 = min(a1, a2, a3);
    int max1 = max(a1, a2, a3);
    int medio1 = medio(a1, a2, a3);

    int min2 = min(b1, b2, b3);
    int max2 = max(b1, b2, b3);
    int medio2 = medio(b1, b2, b3);

    cout << min1 << medio1 << max1 << endl;
    cout << min2 << medio2 << max2 << endl;

    int p1, p2;
    p1 = 0;
    p2 = 0;

    if (min1 > min2)
        p1++;
    else if (min2 > min1)
        p2++;

    if (max1 > max2)
        p1++;
    else if (max2 > max1)
        p2++;

    if (medio1 > medio2)
        p1++;
    else if (medio2 > medio1)
        p2++;

    if (p1 > p2)
        cout << "Attaccante vince" << endl;
    else if (p2 > p1)
        cout << "Difensore vince" << endl;
    else
        cout << "Pareggio" << endl;
}

int min(int n1, int n2, int n3) {
    int res = n3;

    if (n1 <= n2 && n1 <= n3)
        res = n1;

    if (n2 <= n3 && n2 <= n1)
        res = n2;

    return res;
}

int max(int n1, int n2, int n3) {
    int res = n3;

    if (n1 >= n2 && n1 >= n3)
        res = n1;

    if (n2 >= n3 && n2 >= n1)
        res = n2;

    return res;
}

int medio(int n1, int n2, int n3) {
    int min1 = min(n1, n2, n3);
    int max1 = max(n1, n2, n3);
    int res = n3;

    if (n1 != min1 && n1 != max1)
        res = n1;

    if (n2 != min1 && n2 != max1)
        res = n2;

    return res;
}