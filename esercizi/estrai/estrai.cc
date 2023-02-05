#include <iostream>

using namespace std;

void estrai_aux(char *s1, char *s2, int is1, int is2) {
    if (s1[is1] == '\0') {
        s2[is2] = '\0';
        return;
    }

    if (s1[is1] >= 'A' && s1[is1] <= 'Z') {
        s2[is2] = s1[is1];
        is2++;
    }

    is1++;
    estrai_aux(s1, s2, is1, is2);
}

void estrai(char *s1, char *s2) {
    estrai_aux(s1, s2, 0, 0);
}

int main() {
    char s1[] = "Giovanni Maria Zanchetta";
    char s2[80];
    estrai(s1, s2);
    cout << s2 << endl;
}
