#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MAXVALUE 100
#define MAXSIZE 100

typedef struct tree {
  int data;
  struct tree * left;
  struct tree * right;
} tree;

void insert(tree * & result, const int num) {
		if (result == NULL) {
				result = new tree;
				// *result = {num, NULL, NULL};
                result->data = num;
                result->left = NULL;
                result->right = NULL;
		} else if (result->data > num) {
				insert(result->left, num);
		} else {
				insert(result->right, num);
		}
}

tree * crea_tree(const int num) {
		tree * result = NULL;
		for(int i = 0; i < num; i++) {
				insert(result, rand()%MAXVALUE);
		}
		return result;
}

void print_tree(tree * root, int spazio = 0){
		if (root != NULL) {
				spazio++;
				print_tree(root->right, spazio);

				for (int i = 1; i < spazio; i++) std::cout<<"  ";
				std::cout<<root->data<<"\n";
				print_tree(root->left, spazio);
		}
}

void delete_tree(tree * & root) {
  if (root != NULL) {
    delete_tree(root->left);
    delete_tree(root->right);
    delete root;
    root = NULL;
  }
}


// Add hereafter the declaration of dimensione

int dimensione(tree *t);

// Add here above the declaration of dimensione

int main() {
		srand(unsigned(time(0)));
		//
		// Commentare la linea seguente per avere comportamento
		// non-deterministico
		//
		// srand(0);
		tree * root = crea_tree(rand()%MAXSIZE);

		std::cout << "Initial tree: " << std::endl;
		print_tree(root);
		std::cout << std::endl;
  std::cout << "Dimensione = " << dimensione(root) << std::endl;
  delete_tree(root);
		return 0;
}

// Add hereafter the definition of dimensione

int dimensione_aux(tree *t, int dim) {
    if (t == NULL) {
        return dim;
    }

    int dim1 = dimensione_aux(t->left, dim+1);
    int dim2 = dimensione_aux(t->right, dim+1);
    if (dim1 > dim2) {
        dim = dim1;
    }
    else {
        dim = dim2;
    }

    return dim;
}

int dimensione(tree *t) {
    return dimensione_aux(t, 0);
}

// Add here above the definition of dimensione
