# ERRORI COMUNI
- LEGGERE TUTTO IL TESTO
- controllo valori `if (n > dim) exit(1);`
- controllo argc `if (argc < 3) exit(1);`
- controllo apertura `if (in.fail()) exit(1);`
- chiusura stream `in.close(); out.close();`
- errore silenzioso `new (nothrow) nodo`
- deallocazione array, struct `delete l1`
- deallocazione abstract data types `deinit()`
- considerare terminatore stringa `'\0'`
- array terminatore stringa `char a[10] = { };`
- gestire primo e ultimo elemento linked list
- NON inizializzare liste nel caso base di albero
