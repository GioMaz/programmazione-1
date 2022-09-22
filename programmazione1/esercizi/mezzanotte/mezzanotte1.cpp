#include <iostream>

using namespace std;

int main() {
    int s;

    cin >> s;

    int h = s/3600;

    int app = s%3600;

    int m = app/60;
    int s1 = app%60;

    if (h < 10)
        cout << '0' << h;
    else
        cout << h;

    cout << ':';

    if (m < 10)
        cout << '0' << m;
    else
        cout << m;

    cout << ':';

    if (s1 < 10)
        cout << '0' << s1;
    else
        cout << s1;

    return 0;
}
