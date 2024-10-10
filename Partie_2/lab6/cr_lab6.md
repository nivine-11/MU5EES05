#Partie1:

/MUS5EE05/Partie_2 : mkdir lab6

# Creation d'un script 
touch master.sh 
(#!/bin/bash)

# Afficher le type de shell utilisé
echo "Le shell utilisé est Bash se trouvant dans /bin/bash."

# Lister les fichiers dans le répertoire lab5
echo "Liste des fichiers dans le répertoire lab5 :"
ls /home/nivine/MU5EES05/Partie_2/lab5

# Afficher le chemin complet du répertoire lab5
echo "Le chemin d'accès complet au répertoire lab5 est :"
realpath /home/nivine/MU5EES05/Partie_2/lab5

# Creation d'une variable
master_syscom="Hello Embedded Linux"

# Afficher la valeur de la variable
echo $master_syscom

chmod +x master.sh
./master.sh


#Partie 2 

#!/bin/bash

touch script2.sh
chmod +x script2.sh

N1=$1
N2=$2


if [ "$N1" -lt "$N2" ] 
    then
    echo "Le nombre $N1 est inférieur au nombre $N2."

elif [ "$N1" -gt "$N2" ]
    then
    echo "Le nombre $N1 est supérieur au nombre $N2."

else
    echo "Le nombre $N1 est égal au nombre $N2."
fi


#Partie 3
(#!/bin/bash)

# Chemin du répertoire lab4 (vous pouvez changer ce chemin si nécessaire)
lab4_chemain=~/MU5EES05/Partie_2/lab4

# Parcourir tous les fichiers et répertoires dans le répertoire lab4
for item in "$lab4_chemain"/*; do
  # Vérifier si l'élément est un répertoire
  if [ -d "$item" ]; then
    echo "$item est un répertoire."
  fi
done


# Partie 4

(#!/bin/bash)

# Chemin du répertoire lab4 (vous pouvez changer ce chemin si nécessaire)
cd "$1"


# Parcourir tous les fichiers et répertoires dans le répertoire courant (après le cd)

for item in *; do
  # Vérifier si l'élément est un répertoire
  if [ -d "$item" ]; then  # Si l'élément est un répertoire
    echo "$item est un répertoire."  # Afficher le nom du répertoire
  fi
done


#Partie 5
#!/bin/bash


cd "$1"
# Parcourir tous les fichiers et répertoires dans le répertoire courant (après le cd)

if [ ! -d "$1" ]; then
  echo "Erreur : Le chemin $1 n'est pas un répertoire valide."
  exit 1
fi

for item in *; do
  
  if [ -d "$item" ]; then  
    echo "$item est un répertoire."  
  fi
done

#Partie 6
#!/bin/bash  # Indique que ce script doit être exécuté avec Bash

for i in {1..10}; do  
    
    # Télécharger la page HTML de XKCD numéro i (1 à 10)
    wget -q -O "$i.html" "http://xkcd.com/$i"
    
    # -q : Mode silencieux (ne montre pas les détails du téléchargement)
    # -O "$i.html" : Sauvegarde le fichier HTML dans 1.html, 2.html, etc.

    # Chercher l'URL de l'image dans le fichier HTML téléchargé
    image_url=`grep -i hotlink "$i.html" | grep -o 'https[^"]*' | head -1`
    # grep -i hotlink : Cherche la ligne contenant "hotlink" (pas sensible à la casse)
    # grep -o 'https[^"]*' : Extrait l'URL (commençant par "https" jusqu'au guillemet fermant)
    # head -1 : Prend la première URL trouvée
    # Stocke l'URL dans la variable image_url

    # Télécharger l'image à partir de l'URL trouvée et la sauvegarder sous image1.jpg, image2.jpg, etc.
    wget -q -O "image$i.jpg" "$image_url"
    # -q : Mode silencieux pour ne pas afficher les détails
    # -O "image$i.jpg" : Sauvegarde l'image sous image1.jpg, image2.jpg, etc.

    # Afficher l'image téléchargée avec eog (Eyes of GNOME)
    eog "image$i.jpg" &
    # & : Lancer eog en arrière-plan pour ne pas bloquer le script

done  # Fin de la boucle, retourne au début avec la valeur suivante de i, jusqu'à 10




