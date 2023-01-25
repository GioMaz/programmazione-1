#include <iostream>

using namespace std;

void from_decimal(int n, char res[]) {
    int max_len = 100;

    int n1 = n;

    char res1[max_len];
    int i = max_len - 1;
    while (n1 != 0 && i >= 0) {
        int mod = n1 % 16; // BASE 16
        if (mod > 9) {
            res1[i] = 'A' + mod - 10;
        }
        else {
            res1[i] = '0' + mod;
        }
        n1 /= 16; // BASE 16
        i--;
    }

    i++;
    for (int j = 0; j < max_len - i; j++) {
        res[j] = res1[i + j];
    }
    res[max_len - i] = '\0';
}

int to_decimal(char n[]) {
    int max_len = 100;

    int i = 0;
    int cur = 1;
    int res1[max_len];
    while (n[i] != '\0') {
        if (n[i] >= 'A' && n[i] <= 'F') { // BASE 16
            cur = 10 + n[i] - 'A';
        }
        else if (n[i] >= '0' && n[i] <= '9'){
            cur = n[i] - '0';
        }

        res1[i] = cur;

        i++;
    }

    int res = 0;
    int index = i - 1;
    for (int j = 0; j < i; j++) {
        int pow = 1;
        for (int k = 1; k <= index; k++) {
            pow *= 16; // BASE 16
        }
        res += res1[j]*pow;
        index--;
    }

    return res;
}

int main() {
    char res[100];
    from_decimal(455951, res);
    cout << res << endl;

    int n = to_decimal(res);
    cout << n << endl;

    return 0;
}
