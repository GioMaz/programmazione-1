#include <iostream>
#include <cstdlib>
#include <cassert>

using namespace std;

struct node {
    char info;
    node * next;
};

void dealloca(node *& s) {
    while(s != NULL) {
        node * t = s;
        s = s->next;
        delete t;
    }
}

void stampa_lista(const char * testo, node * s) {
    std::cout << testo;
    for( ; s!= NULL; s=s->next) {
   	    std::cout << " " << s->info;
    }
    std::cout << std::endl;
}

// Scrivere qui sotto la dichiarazione della funzione compute_lists ed
// eventuali funzioni accessorie

void compute_lists(const char *s, node *&s1, node *&s2);
void compute_lists_aux(const char *s, node *&s1, node *&s2, int i, node *curs1, node *curs2);

// Scrivere qui sopra la dichiarazione della funzione compute_lists ed
// eventuali funzioni accessorie

int main(int argc, char **argv) {
		if (argc != 2) {
				std::cout << "Usage: " << argv[0]
														<< " \"stringa di caratteri\"" << std::endl;
				exit(1);
		}
		node * s1 = nullptr;
        node * s2 = nullptr;
		std::cout << "La stringa da analizzare e': " << argv[1] << std::endl;

		compute_lists(argv[1], s1, s2);

		stampa_lista("Lista s1:", s1);
		stampa_lista("Lista s2:", s2);
		dealloca(s1);
		dealloca(s2);
}

// Scrivere qui sotto la definizione della funzione compute_lists ed
// eventuali funzioni accessorie

void compute_lists_aux(const char *s, node *&s1, node *&s2, int i, node *curs1, node *curs2) {
    if (i == 0) {
        s1 = new node;
        s2 = new node;
        curs1 = s1;
        curs2 = s2;
    }
    if (s[i] == '\0') {
        return;
    }

    if (s[i] > 'A' && s[i] < 'M') { // gli estremi sono da includere
        curs1->info = ('M' - s[i] + 'a' + 1); // il +1 non serviva
        curs1->next = new node;
        curs1 = curs1->next;
    }
    else if (s[i] > 'N' && s[i] < 'Z') { // stessa cosa, gli estremi vanno inclusi
        curs2->info = 'Z' - s[i] + 'n' + 1;
        curs2->next = new node;
        curs2 = curs2->next;
    }

    compute_lists_aux(s, s1, s2, i+1, curs1, curs2);
}

void compute_lists(const char *s, node *&s1, node *&s2) {
    compute_lists_aux(s, s1, s2, 0, nullptr, nullptr);
}

// Scrivere qui sopra la definizione della funzione compute_lists ed
// eventuali funzioni accessorie
