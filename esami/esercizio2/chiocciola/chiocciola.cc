#include <iostream>

using namespace std;

/* Inserire qui sotto la dichiarazione della funzione extract */

char *extract(const char string[]);
char *extract_aux(const char string[], int dim);

/* Inserire qui sopra la dichiarazione della funzione extract */

/* Solo di esempio, non fate assunzioni su questo valore */
const int DIM = 255;

int main(int argc, char ** argv) {
  char input_string[DIM+1];
  char * extracted;
  char answer;

  do {
    std::cout << "Inserire la stringa da controllare: ";
    std::cin >> input_string;

    extracted = extract(input_string);
    std::cout << "La stringa estratta e': " << extracted << std::endl;

    delete [] extracted;
    std::cout << "Si vuole inserire un'altra stringa? [*/n]";
    std::cin >> answer;
  } while (answer != '\0' && answer != 'N' && answer != 'n');
  return 0;
}

/* Inserire qui sotto la definizione della funzione estract */

char *extract(const char string[]) {
    return extract_aux(string, 0);
}

char *extract_aux(const char string[], int dim) {
    if (string[0] == '\0') {
        // nel caso in cui non ci siano '@' crea una stringa vuota
        // con solamente un carattere di terminazione
        char *res = new char[dim+1];
        res[dim] = '\0';
        return res;
    }
    else if (string[0] == '@') {
        dim++;
    }

    char *res1 = extract_aux(string+1, dim);

    res1[dim] = '@';

    return res1;
}

/* Inserire qui sopra la definizione della funzione estract */
