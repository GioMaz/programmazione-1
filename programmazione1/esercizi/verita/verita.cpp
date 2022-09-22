#include <iostream>

using namespace std;

int main() {
    bool t[2] = { true, false };
    cout << "|A|B|X|" << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cout << '|' << t[i] << '|' << t[j] << '|' << (t[i] ^ t[j]) << '|' << endl;
    return 0;
}
