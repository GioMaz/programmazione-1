#include <iostream>
#include <fstream>

using namespace std;

void bubble(int *a, int len) {
    int tmp;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (a[j] > a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

struct nodo {
    int val;
    nodo *left;
    nodo *right;
};

typedef nodo *tree;

void init(tree &t) {
    t = NULL;
};

void deinit(tree &t) {
    if (t != NULL) {
        deinit(t->left);
        delete[] t;
        deinit(t->right);
    }
}

void insert(tree &t, int n) {
    if (t == NULL) {
        t = new (nothrow) nodo;
        t->val = n;
        t->left = NULL;
        t->right = NULL;
    }
    else if (n == t->val) return;
    else if (n < t->val) insert(t->left, n);
    else if (n > t->val) insert(t->right, n);
}

void print_aux(const tree &t, int i) {
    if (t == NULL) return;
    print_aux(t->right, i+1);
    for (int j = 0; j < i; j++) {
        cout << "  ";
    }
    cout << t->val << endl;
    print_aux(t->left, i+1);
}

void print(const tree &t) {
    print_aux(t, 0);
}

void insert_bilanciato_aux(int numeri[], int n1, int n2, tree &t) {
    int n = n1 + ( (n2 - n1) / 2 );
    insert(t, numeri[n]);
    if (n == n1 || n == n2) {
        return;
    }
    insert_bilanciato_aux(numeri, n1, n, t);
    insert_bilanciato_aux(numeri, n, n2, t);
}

void insert_bilanciato(int numeri[], int n, tree &t) {
    insert_bilanciato_aux(numeri, 0, n, t);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Sono necessari almeno 2 argomenti" << endl;
        return 1;
    }

    fstream in;
    in.open(argv[1], ios::in);
    if (in.fail()) {
        cout << "Apertura di " << argv[1] << " fallita" << endl;
        return 1;
    }

    int n;
    int i = 0;
    int max_len = 100;
    int numeri[max_len];
    while (in >> n && i < max_len) {
        numeri[i] = n;
        i++;
    }

    in.close();

    bubble(numeri, i);

    tree t;
    init(t);
    insert_bilanciato(numeri, i, t);
    print(t);
    deinit(t);

    return 0;
}
