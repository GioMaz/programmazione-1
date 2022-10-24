#include <iostream>

using namespace std;

int mystrlen(char *s) {
    if (*s == '\0')
        return 0;

    return 1+mystrlen(s+1);
}

int main() {
    char buffer[] = "questa è una stringa";
    cout << mystrlen(buffer) << endl;
    return 0;
}
