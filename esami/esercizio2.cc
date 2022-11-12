#include <iostream>
#include <cstddef>

using namespace std;

void print(const char a[], const int s, const char * prefix) {
    cout << prefix;
    for (int i = 0; i < s; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// TIPS:
// usare riferimenti a puntatori *&rp
// usare riferimenti &r
void get_elements_aux(char source[], int dim, char *&dest1, int &dim_dest1, char *&dest2, int &dim_dest2, int i, int ddim_dest1, int ddim_dest2) {
    if (i == dim) {
        dest1 = new char[dim_dest1];
        dest2 = new char[dim_dest2];
        return;
    }

    if (source[i] >= 'a' && source[i] <= 'z') {
        dim_dest1++;
        ddim_dest1++;
    }
    else if(source[i] >= '0' && source[i] <= '9') {
        dim_dest2++;
        ddim_dest2++;
    }

    get_elements_aux(source, dim, dest1, dim_dest1, dest2, dim_dest2, i+1, ddim_dest1, ddim_dest2);

    if (source[i] >= 'a' && source[i] <= 'z') {
        dest1[ddim_dest1-1] = 'Z' - (source[i] - 'a');
    }
    else if(source[i] >= '0' && source[i] <= '9') {
        dest2[ddim_dest2-1] = '9' - (source[i] - '0');
    }
}

void get_elements(char source[], int dim, char *&dest1, int &dim_dest1, char *&dest2, int &dim_dest2) {
    get_elements_aux(source, dim, dest1, dim_dest1, dest2, dim_dest2, 0, 0, 0);
}

void read_elements(char s[], const int ms, int & s_s) {
    char r = '\0';
    for (s_s = 0; ((s_s < ms) && (r != '\n')); ) {
        r = cin.get();
        if ((r != '\n') && (r != ' ')) s[s_s++] = r;
    }
}

int main() {
    const int maxdim = 10;

    char * d1;
    int d1_s = 0;

    char * d2;
    int d2_s = 0;

    const int ms = maxdim;
    char s[ms];
    int s_s = 0;

    read_elements(s, ms, s_s);
    print(s, s_s, "Source = ");

    get_elements(s, s_s, d1, d1_s, d2, d2_s);

    print(d1, d1_s, "D1     = ");
    print(d2, d2_s, "D2     = ");

    delete [] d1;
    delete [] d2;

    return 0;
}

// Inserire qui la definizione di get_elements e di eventuali altre
// funzioni ausiliarie
