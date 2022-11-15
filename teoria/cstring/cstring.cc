#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[22] = "Questa è una stringa";

    cout << strlen(s) << endl; // 21
    cout << strchr(s, 'u') << endl; // uesta è una stringa
    cout << strrchr(s, 'u') << endl; // una stringa
    cout << strstr(s, "una") << endl; // una stringa

    char s1[22];
    strcpy(s1, s);
    cout << s1 << endl; // Questa è una stringa

    char s2[6];
    strncpy(s2, s, 5);
    cout << s2 << endl; // Quest
    
    char s3[8] = "Ciao";
    strcat(s3, "!!!");
    cout << s3 << endl; // Ciao!!!

    char s4[5] = "Ciao";
    cout << strcmp(s4, "Ciao") << endl; // 0
}
