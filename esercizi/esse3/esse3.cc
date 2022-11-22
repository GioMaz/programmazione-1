#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Studente {
    char nome[100];
    char cognome[100];
    int matricola;
    float media;
};

void stampa_studente(const Studente &studente) {
    cout << "NOME: " << studente.nome << endl;
    cout << "COGNOME: " << studente.cognome << endl;
    cout << "MATRICOLA: " << studente.matricola << endl;
    cout << "MEDIA: " << studente.media << endl;
}

Studente genera_studente(char nome[], char cognome[], int matricola, float media) {
    Studente studente;

    strcpy(studente.nome, nome);
    strcpy(studente.cognome, cognome);
    studente.matricola = matricola;
    studente.media = media;

    return studente;
}

void ottieni_studenti_aux(fstream &in, int i, int &dim, Studente *&database) {
    if (in.eof()) {
        dim = i;
        database = new Studente[dim];
        return;
    }

    char nome[100];
    char cognome[100];
    int matricola;
    int media;
    in >> nome >> cognome >> matricola >> media;

    ottieni_studenti_aux(in, i+1, dim, database);

    Studente cur = genera_studente(nome, cognome, matricola, media);
    database[i] = cur;
}

Studente *ottieni_studenti(char *file, int &dim) {
    fstream in;
    in.open(file, ios::in);
    Studente *database;
    ottieni_studenti_aux(in, 0, dim, database);
    in.close();
    return database;
}

int cerca_matricola(Studente *&database, const int &dim, const int &matricola) {
    int i = 0;
    bool finito = false;
    while (i < dim && !finito) {
        if (database[i].matricola == matricola) {
            finito = true;
        }
        else {
            i++;
        }
    }
    if (!finito) {
        i = -1;
    }
    return i;
}

int cerca_nome_e_cognome(Studente *database, int &dim, const char *nome, const char *cognome) {
    int i = 0;
    bool finito = false;
    while (i < dim && !finito) {
        if (strcmp(database[i].nome, nome) == 0 &&
            strcmp(database[i].cognome, cognome) == 0) {
            finito = true;
        }
        else {
            i++;
        }
    }
    if (!finito) {
        i = -1;
    }
    return i;
}

int cerca_media_maggiore(Studente *database, int &dim, const char *nome, const char *cognome) {
    int res = 0;
    for (int i = 0; i < dim; i++) {
        if (database[i].media >= database[res].media) {
            res = i;
        }
    }

    return res;
}

int main(int argc, char *argv[]) {
    int dim;
    Studente *database = ottieni_studenti(argv[1], dim);

    for (int i = 0; i < dim; i++) {
        cout << i << ' ' << database[i].nome << endl;
    }
    cout << cerca_nome_e_cognome(database, dim, "Mario", "Rossi") << endl;

    return 0;
}
