#include <iostream>

using namespace std;

bool from_decimal(int n, int base, char res[]) {
    bool result = true;

    if (base > 16) { // BASE 16
        result = false;
    }

    char digits[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' }; // BASE 16
    int max_len = 100;

    int n1 = n;
    int base1 = base;

    char res1[max_len];
    int i = max_len - 1;
    while (n1 != 0 && i >= 0) {
        res1[i] = digits[n1 % base1];
        n1 /= base1;
        i--;
    }

    i++;
    for (int j = 0; j < max_len - i; j++) {
        res[j] = res1[i + j];
    }
    res[max_len - i] = '\0';

    return result;
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
    from_decimal(455951, 16, res);
    cout << res << endl;

    int n = to_decimal(res);
    cout << n << endl;

    return 0;
}
