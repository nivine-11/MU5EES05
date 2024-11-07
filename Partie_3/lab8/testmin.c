#include <stdio.h>
#include "min.h"

int main() {
    int tableau[5] = {2, 5, 7, 2, 9}; 
    int min_value;
    minim(tableau, 5, &min_value); 

    printf("La valeur minimale du tableau est : %d\n", min_value); 

    return 0;
}