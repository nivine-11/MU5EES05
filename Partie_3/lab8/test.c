#include <stdio.h>
#include "max.h"

int main() {
    int tableau[5] = {2, 5, 7, 2, 9}; 
    int n = 5; 
    int max_value; 

    // Appeler la fonction maxim
    maxim(tableau, n, &max_value);

    // Afficher le résultat
    printf("La valeur maximale du tableau est : %d\n", max_value);

    return 0;
}