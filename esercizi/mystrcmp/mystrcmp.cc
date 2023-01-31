#include <iostream>

using namespace std;

bool mystrcmp(char s1[], char s2[]) {
    bool res = true;
    int i = 0;
    while (s1[i] != '\0') {
        if (s1[i] != s2[i]) {
            res = false;
        }
        i++;
    }

    int j = 0;
    while (s2[j] != '\0') {
        j++;
    }

    if (i != j) {
        res = false;
    }

    return res;
}

int main() {
    char s1[255] = "questa è";
    char s2[255] = "questa è una stringa";

    cout << (mystrcmp(s1, s2) ? "Sono uguali" : "Non sono uguali") << endl;

    return 0;
}
