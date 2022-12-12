#include <iostream>

using namespace std;

int mystrlen(char string[]) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

// int mystrlen(char *s) {
//     if (*s == '\0')
//         return 0;
// 
//     return 1+mystrlen(s+1);
// }

int main() {
    char buffer[255] = "questa è una stringa";
    cout << mystrlen(buffer) << endl;
    return 0;
}
