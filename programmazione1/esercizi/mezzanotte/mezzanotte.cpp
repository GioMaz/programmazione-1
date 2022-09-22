#include <iostream>

using namespace std;

int main() {
    int h, m, s;

    cin >> h >> m >> s;

    int res = (23-h)*3600 + (59-m)*60 + (59-s);

    cout << "secondi da mezzanotte: " << res << endl;

    return 0;
}
