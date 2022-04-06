#include <stdio.h>

// trovare un arrray pari


int array_pari(int *X, int dim);

int main() {
    // scrivere una sorta di array di prova
    
}

int array_pari(int *X, int dim) {
    /* PRE: dim è un numero strettamente maggiore di 0
     * POST: ritorna 1 se ogni elemento dell'array è un numero pari, altrimenti ritorna 0
     */ 
    if (dim ==0) return 1;
    else {
        if (X[dim]%2 != 0)
            return 0;
        array_pari(X, dim - 1);
    }
}

