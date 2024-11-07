#include <stdio.h>
#include "var.h"

int main() {
    int tableau[5] = {2, 5, 7, 2, 9};
    float var_value; 
    int n=5;

    variance(tableau, n, &var_value);

    // Affichage du résultat
    printf("La variance du tableau est : %.2f\n", var_value);

    return 0;
}