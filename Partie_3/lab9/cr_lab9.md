# **Lab 9 : Création et utilisation des bibliothèques statiques**

## **Partie_1 : Création des fichiers `max.c`, `max.h`, `min.c`, `min.h`**
- Copier les fichiers source des fonctions `max` et `min` :

---

## **Partie_2 : Compiler `max.c` et `min.c` sans édition de liens**
- Compiler chaque fichier source en fichier objet `.o` : 
  gcc -c max.c -o max.o
  gcc -c min.c -o min.o (-c compile le fichier source sans lier le programme)


---

## **Parte_3 : Créer une bibliothèque statique `liboutils.a`**
- Ajouter les fichiers objets `max.o` et `min.o` à une archive :
  ar rcs liboutils.a max.o min.o 

(rcs = ajoute ou remplacer les fichiers objets dans l'archive + cree un index)


---

## **Partie_4 : Vérifier la liste des fichiers dans l’archive**
- ar t liboutils.a 


---

## **Partie_5 : Générer un index pour la bibliothèque**
- Utiliser `ranlib` pour mettre à jour l’index de la bibliothèque : ranlib liboutils.a


---

## **Étape 6 : Créer un fichier `main.c` pour tester `max` et `min`**
Code pour `main.c` :


## **Partie_7 : Créer les répertoires include et lib dans /opt**

sudo mkdir -p/opt/include /opt/lib

## **Partie_8 : Deplacer les fichiers vers /opt** (lib = emplacement typique pour le bibliotheques statiques /// include = emplencement typique pour les fichiers d'en-tete)

mv max.h /opt/include/
mv liboutils.a /opt/lib/

## **Partie_9 : Supprimer les fichiers .o, max.c, et min.c**

rm *.o max.c min.c
gcc main.c -I/opt/include -L/opt/lib -loutils -o main 

## **Partie_10 : fonctionnement du code**
./main 


## **Partie_11 : Ajouter la fonction variance à la bibliothèque-**
gcc -c var.c -o var.o
ar r /opt/lib/liboutils.a var.o
ranlib /opt/lib/liboutils.a

## **Partie_12 : Vérifier la présence des fichiers objets** 
ar t /opt/lib/liboutils.a


## **Partie_13 : commande ranlib et nm pour mettre à jour la l’indexe **

ranlib /opt/lib/liboutils.a
nm /opt/lib/liboutils.a

## **Partie_14 : 
mv var.h /opt/include 
gcc main.c -I/opt/include -L/opt/lib -loutils -o main

## **Partie_15 : 
float ceil_var = ceil(var_value);
float floor_var = floor(var_value);