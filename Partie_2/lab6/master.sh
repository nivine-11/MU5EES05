#!/bin/bash

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