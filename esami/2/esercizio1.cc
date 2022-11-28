#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

// La funzione non va modificata, pena l'annullamento dell'esercizio
void sort_array(int * array, int len_array) {
  for (int i=0; i<len_array; i++) {
    for (int j=0; j<len_array; j++) {
      if (array[i] > array[j]) {
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
    }
  }
}

int main(int argc, char * argv []) {
    char *f = argv[1];
    // di solito le varibile scritte in maiuscolo sono per le costanti, ma non è considerato un errore
    int DIM = atoi(argv[2]);
    int N = atoi(argv[3]);
    // manca il controllo n < dim

    fstream in, out;
    in.open(f, ios::in);
    out.open("output.txt", ios::out);
    // manca in.fail() e out.fail(), il programma dovrebbe terminare stampando un messaggio di errore nel caso il fle passato in input non esistesse.

    char buffer[2];
    
    int a[DIM]; // come scritto nella consegna non si poteva usare questo tipo di dichiarazione; l'array doveva essere allocato con il comando 'new'
    // bisogna dare nomi significativi alle variabili, non 'a'. Leggendo il codice non si capisce che cosa debba contenere

    int i = 0;
    while (in >> buffer) {
        a[i] = atoi(buffer); // da uno stream puoi leggere direttamente un intero senza passare per una stringa -> usando direttamente in >> a[i]
        i++;
    }

    sort_array(a, DIM);

    for (int i = 0; i < N; i++) {
       out << a[i] << endl; 
    }

  // non chiudi gli stream di input e output

    return 0;
}
