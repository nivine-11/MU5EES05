# **Lab 10 : Création et utilisation des bibliothèques dynamiques**


## **Partie 1 **
cp ../lab8/m* .
cp ../lab8/v* .

## **Partie 2 : Compiler les fichiers avec -fPIC**
gcc -c -fPIC max.c -o max.o
gcc -c -fPIC min.c -o min.o
gcc -c -fPIC var.c -o var.o

## **Partie_3 : Creation de la bibliotheque partage**
gcc -shared -o liboutils.so max.o min.o var.o

## **Partie_4 : Deplacement de bibliotheque **
sudo mv liboutils.so /opt/lib/

## **Partie_5 : Compilation du main.c **
gcc main.c -I/opt/include -L/opt/lib -loutils -o main_program

## **Partie_6 : Execution du main **
./main
bash: ./main: No such file or directory
signifie que le fichier exécutable main n'a pas été trouvé dans le répertoire courant. 


## **Partie_7 :Afficher LD_LIBRARY_PATH
echo $LD_LIBRARY_PATH
 c'est vide
## **Partie_8 : Ajouter /opt/lib à LD_LIBRARY_PATH
ldd

/opt/lib: comme contenu de la variable LD_LIBRARY_PATH, cela signifie que /opt/lib est le répertoire dans lequel le système va chercher les bibliothèques partagées au moment de l'exécution

## **Partie_9 :Recompiler et exécuter
gcc main.c -I/opt/include -L/opt/lib -loutils -lm -o main

## **Partie_10 : Vérifier les bibliothèques utilisées
ldd ./main

linux-vdso.so.1 (0x00007ffcfef7f000)
        liboutils.so => /opt/lib/liboutils.so (0x0000705188a96000)
        libm.so.6 => /lib/x86_64-linux-gnu/libm.so.6 (0x000070518899f000)
        libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x0000705188600000)
        /lib64/ld-linux-x86-64.so.2 (0x0000705188aa2000)

## **Partie_11 :  Localiser libm.so
/lib/x86_64-linux-gnu/libm.so.6

## **Partie_12 :Identifier le soname et le nom réel
libm.so.6

## **Partie_13 : Déplacer la bibliothèque dans /usr/lib
sudo cp /opt/lib/liboutils.so /usr/lib/
ls -l /usr/lib/liboutils.so

sudo chmod 444 /usr/lib/liboutils.so

## **Partie_14 :  Mettre à jour la cache avec ldconfig
sudo ldconfig


## **Partie_15 : Vérifier avec ldconfig -p
ldconfig -p | grep liboutils

## **Partie_16 :Désactiver LD_LIBRARY_PATH
unset LD_LIBRARY_PATH
echo $LD_LIBRARY_PATH

## **Partie_17 : Recompiler en utilisant -l uniquement
gcc main.c -I/opt/include -loutils -lm -o main

./maim