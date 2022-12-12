#include <iostream>
#include <fstream>

using namespace std;

int mystrlen(char string[]) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

void mystrcpy (char s1[], char s2[]) {
    int i = 0;
    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i+1] = '\0';
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cout << "Inserire file di input e file di output";
        return 1;
    }

    fstream in, out;

    in.open(argv[1], ios::in);
    if (in.fail()) {
        cout << "Apertura di " << argv[1] << " fallita" << endl;
        return 1;
    }
    out.open(argv[2], ios::out);
    if (out.fail()) {
        cout << "Apertura di " << argv[2] << " fallita" << endl;
        return 1;
    }

    const int MAX_DIM = 255;

    char buffer[MAX_DIM] = {};
    int len;
    char max[MAX_DIM] = {};
    int maxlen = 0;
    while (in.getline(buffer, MAX_DIM)) {
        len = mystrlen(buffer);
        if (len > maxlen) {
            maxlen = len;
            mystrcpy(max, buffer);
        }
        out << len << endl;
    }
    out << max << ' ' << maxlen << endl;

    in.close();
    out.close();

    return 0;
}
