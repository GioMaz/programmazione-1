#include <iostream>

using namespace std;

void muovi_torre(int disk, char source, char dest, char spare) {
    if (disk == 0) {
        return;
    }

    muovi_torre(disk-1, source, spare, dest);
    cout << "Sposta disco " << disk << " da " << source << " a " << dest << endl;
    muovi_torre(disk-1, spare, dest, source);
}

int main() {
    muovi_torre(4, 'A', 'B', 'C');
    return 0;
}
