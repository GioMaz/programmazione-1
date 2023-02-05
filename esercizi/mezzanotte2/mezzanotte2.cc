#include <iostream>

using namespace std;

int main() {
    int s;

    cin >> s;

    int h = s/3600;

    int app = s%3600;

    int m = app/60;
    int s1 = app%60;

    cout << h << ':' << m << ':' << s1 << endl;

    return 0;
}
