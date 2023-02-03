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
