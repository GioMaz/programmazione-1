#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    int r = rand() % 6 + 1;
    cout << r << endl;
}
