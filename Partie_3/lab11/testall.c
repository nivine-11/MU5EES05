#include <stdio.h>
#include "max.h"
#include "min.h"
#include "var.h"

int main() {
    
    int tableau[] = {4, 9, 10, 11, 12, 15, 12, 9, 0, 30};

    int max_value, min_value;
    float var_value;
    int n=10;

    maxim(tableau, n, &max_value);
    minim(tableau, n, &min_value);
    variance(tableau, n, &var_value);

    printf("Le maximum du tableau est : %d\n", max_value);
    printf("Le minimum du tableau est : %d\n", min_value);
    printf("La variance du tableau est : %.2f\n", var_value);

    return 0;
}
