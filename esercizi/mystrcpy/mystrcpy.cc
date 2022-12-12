#include <iostream>

using namespace std;

void mystrcpy (char s1[], char s2[]) {
    int i = 0;
    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i+1] = '\0';
}

int main() {
    char s1[255] = "questa è una stringa";
    cout << s1 << endl;

    char s2[255];
    mystrcpy(s2, s1);
    cout << s2 << endl;
    return 0;
}
