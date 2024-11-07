1) # max.h

#ifndef H_MAX_H
#define H_MAX_H

void max(int tableau[], int n,int *maxim);

#endif 

# max.c

#include "max.h"

void max(int t[], int n, int *maxim) {
    if (n <= 0) return; // Vérifier que la taille du tableau est positive

    *maxim = t[0]; // Initialiser max avec le premier élément du tableau

    for (int i = 1; i < n; i++) {
        if (t[i] > *maxim) {
            *maxim = t[i]; // Mettre à jour max si un élément est supérieur
        }
    }
}

# test.c

#include <stdio.h>
#include "max.h"

int main() {
    int tableau[5] = {2, 5, 7, 2, 9}; 
    int n = 5; 
    int max_value; 

    // Appeler la fonction maxim
    max(tableau, n, &max_value);

    // Afficher le résultat
    printf("La valeur maximale du tableau est : %d\n", max_value);

    return 0;
}

2) gcc test.c max.c -g -o result  
# -g pour debugger et -o specifie le resultat doit etre enregistre ou 

3) # -E preprocesseur 
gcc -E max.c -o max.i

# -S compilation 
gcc -S max.i 

# -c assemblage 
gcc -c max.s

4) max.i  max.s  max.o
# max.i : fichier pretraite ,  Le compilateur exécute le préprocesseur, qui remplace les directives #include, les macros #define et d'autres directives du préprocesseur, et résout les inclusions de fichiers d'en-tête. Le résultat est un fichier contenant le code source complet après le prétraitement.

# max.s : fichier assembleur ,Le compilateur traduit le code source en langage assembleur, une représentation intermédiaire plus proche du code machine mais encore lisible par l'humain.

# max.o : fichier objet , Le compilateur assemble le code en langage assembleur en code machine, créant un fichier objet. Ce fichier contient du code binaire

5) La fonction maxim sera remplacée par le binaire correspondant au moment de la phase d'assemblage,a ce stade, l'assembleur transforme le code en langage assembleur (le fichier .s) en un fichier objet binaire (.o). Le code C, y compris la fonction maxmin, est converti en instructions machine compréhensibles par le processeur.

7) 




3) python3 -m compileall