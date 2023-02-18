#include <iostream>

using namespace std;

void ruota_indietro(char s[]) {
    char c = s[0];
    int i = 0;
    while (s[i+1] != '\0') {
        s[i] = s[i+1];
        i++;
    }
    s[i] = c;
}

void ruota_avanti(char s[]) {
    int i = 0;
    char prev, cur;
    while (s[i] != '\0') {
        cur = s[i];
        s[i] = prev;
        prev = cur;
        i++;
    }
    s[0] = cur;
}

void ruota(char s[], int n) {
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            ruota_avanti(s);
        }
    }
    else {
        for (int i = 0; i < -n; i++) {
            ruota_indietro(s);
        }
    }
}

int main() {
    char s[] = "parola";

    ruota(s, 1);

    cout << s << endl;

    return 0;
}
