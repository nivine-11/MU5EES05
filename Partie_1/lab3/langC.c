#include <stdio.h>

int main() {
    // Déclaration des variables
    int x, y, produit;

    // Demande des valeurs pour x et y
    printf("Entrez la valeur de x : ");
    scanf("%d", &x);
    
    printf("Entrez la valeur de y : ");
    scanf("%d", &y);

    // Calcul du produit
    produit = x * y * x;

    // Affichage du résultat
    printf("Le produit de %d et %d est : %d\n", x, y, produit);

    return 0;
}
