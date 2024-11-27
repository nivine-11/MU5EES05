#include <stdio.h>
#include <math.h>  // Pour les fonctions ceil et floor
#include "max.h"  // Inclure les fichiers d'en-tête pour max
#include "min.h"  // Inclure les fichiers d'en-tête pour min
#include "var.h"  // Inclure les fichiers d'en-tête pour var

int main() {
    int tableau[] = {13, 12, 5, 1, 19, 13, 17};  // Initialisation du tableau
    int n = 7;  // Taille du tableau

    int max_value, min_value;
    float var_value;

    // Calculer le maximum
    maxim(tableau, n, &max_value);
    printf("Le maximum du tableau est : %d\n", max_value);

    // Calculer le minimum
    minim(tableau, n, &min_value);
    printf("Le minimum du tableau est : %d\n", min_value);

    // Calculer la variance
    variance(tableau, n, &var_value);
    printf("La variance du tableau est : %.2f\n", var_value);

    // Arrondir la variance
    float ceil_var = ceil(var_value);
    float floor_var = floor(var_value);

    printf("La variance arrondie à l'entier supérieur est : %.0f\n", ceil_var);
    printf("La variance arrondie à l'entier inférieur est : %.0f\n", floor_var);


    return 0;
}

