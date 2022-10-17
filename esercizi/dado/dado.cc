#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));

    int r;
    int n = 0;
    for (int i = 0; i < 10; i++) {
        r = rand() % 6 + 1;

        if (r == 1)
            n++;
    }

    int n1;
    cin >> n1;
    if (n1 == n)
        cout << "Corretto!" << endl;
    else
        cout << "Sbagliato, totale: " << n << endl;

    return 0;
}
