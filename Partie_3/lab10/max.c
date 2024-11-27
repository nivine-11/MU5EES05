#include "max.h"

void maxim(int t[], int n, int *max) {
    if (n <= 0) return; // Vérifier que la taille du tableau est positive

    *max = t[0]; // Initialiser max avec le premier élément du tableau

    for (int i = 1; i < n; i++) {
        if (t[i] > *max) {
            *max = t[i]; // Mettre à jour max si un élément est supérieur
        }
    }
}