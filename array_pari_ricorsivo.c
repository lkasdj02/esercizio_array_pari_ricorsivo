#include <stdio.h>

// trovare un arrray pari


int array_pari(int *X, int dim);

int main() {
    // scrivere una sorta di array di prova
    
    int array[] = {2, 4, 6, 8, 10};
    int dimensione = sizeof(array) / sizeof(int);
    int risultato = array_pari(array + dimensione - 1,  dimensione);
    printf("%d", risultato);
    if (risultato == 1) 
        printf("l'array contiene solo elementi pari"); 
    else 
        printf("l'array contiene almento un elemento dispari"); 
}

int array_pari(int *X, int dim) {
    /* PRE: dim è un numero strettamente maggiore di 0
     * POST: ritorna 1 se ogni elemento dell'array è un numero pari, altrimenti ritorna 0
     */ 
    if (dim == 0)  {
        printf("array passato nella sua totalità\n");
        return 1;
    }
    if (*X % 2 != 0)
        return 0;
    printf("%d, %d\n", dim, *X);
    array_pari(X - 1, dim - 1);
}

