#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    char *A = argv[1];
    char *B = argv[2];

    fstream ain, bin, app;
    ain.open(A, ios::in);
    bin.open(B, ios::in);
    app.open("C.txt", ios::app);

    int i = 0;
    char words[1000][100];
    char buffer[100];
    bool found = false;
    while (ain >> buffer) {
        for (int j = 0; j < i; j++) {
            if (strcmp(buffer, words[j]) == 0) {
                found = true;
            }
        }
        if (!found) {
            strcpy(words[i], buffer);
            i++;
        }
        found = false;
    }

    found = false;
    while (bin >> buffer) {
        for (int j = 0; j < i; j++) {
            if (strcmp(buffer, words[j]) == 0) {
                found = true;
            }
        }
        if (!found) {
            strcpy(words[i], buffer);
            i++;
        }
        found = false;
    }

    ain.close();
    bin.close();

    for (int j = 0; j < i; j++) {
        app << words[j] << ' ';
    }

    app.close();
}
