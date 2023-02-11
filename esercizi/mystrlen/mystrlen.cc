#include <iostream>

using namespace std;

int mystrlen(char string[]) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char buffer[255] = "questa è una stringa";
    cout << mystrlen(buffer) << endl;
    return 0;
}
