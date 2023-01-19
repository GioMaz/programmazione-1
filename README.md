## ESAME 20/1/2023
### esercizio1.cc
- decimale -> base = resto
- base -> decimale = moltiplicazione

### esercizio2.cc
- caso base 
- list = f(ramo destro) 
- list = list1
- list = f(ramo sinistro)

### esercizio3.cc
- utilizzare le pile per INVERTIRE

## ERRORI COMUNI
- LEGGERE TUTTO IL TESTO
- controllo valori (grandezza massima di array) delle variabili di input
- controllo argc
- controllo successo apertura stream `if (in.fail())` e `if (out.fail())`
- chiusura stream `in.close()` e `out.close()`
- (nothrow) davanti a tutti i `new`
- deallocazione array dinamici, struct e deinit ADT
- guardare nella directory "esami"
- inizializzare array statici con `char buffer[255] = {}`
- tenere conto di '\0' per stringhe

## Librerie
### cmath

```cpp
#include <cmath>

fabs(x)   // |x|
sqrt(x)   // sqrt(x)
pow(x, y) // x^y
exp(x)    // e^x
log(x)    // ln(x)
log10(x)  // log(x)
sin(x)    // sin(x)
asin(x)   // arcsin(x)
cos(x)    // cos(x)
acos(x)   // arccos(x)
tan(x)    // tan(x)
atan(x)   // arctan(x)
```

### cstdlib

```cpp
#include <cstdlib>

abs(x)   // |x|
srand(x) // seed
rand(x)  // numero random tra 0 e RAND_MAX
```

### cctype

```cpp
#include <cctype>

isalnum(c) // char alfabetico o decimale
isalpha(c) // char alfabetico
isdigit(c) // char decimale
isnctrl(c) // char di controllo
islower(c) // char minuscolo
isupper(c) // char maiuscolo
isprint(c) // char stampabile
isspace(c) // char spazio, tab, return
```

### cstring

```cpp
#include <cstring>

strlen(s)         // lunghezza stringa s
strchr(s, c)      // puntatore al primo carattere c della stringa s
strrchr(c,s)      // puntatore all'ultimo carattere c della stringa s
strstr(s, s1)     // puntatore alla prima sottostringa s1 della stringa s
strcpy(s1, s)     // copia s1 in s e ritorna s
strncpy(s1, s, n) // copia i primi n caratteri di s1 e li inserisce nei primi
									// n caratteri di s
strcat(s, s1)     // aggiunge s1 al termine di s
strcmp(s, s1)     // < 0 se il primo carattere diverso è maggiore in s,
							    // = 0 se le stringhe sono uguali,
							    // > 0 se il primo carattere diverso è maggiore in s1
```
