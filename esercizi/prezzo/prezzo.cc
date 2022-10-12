#include <iostream>

using namespace std;

int main() {
    float p;
    float i;
    cout << "Prezzo iniziale: ";
    cin >> p;
    cout << "IVA: ";
    cin >> i;
    float res = p+((p*i)/100);
    cout << res << endl;
    return 0;
}
