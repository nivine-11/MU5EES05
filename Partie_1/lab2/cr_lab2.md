# Installer Git et des outils supplémentaires (gitk pour une interface graphique et git-email pour envoyer des patchs via email)
sudo apt install git gitk git-email

# Configurer le nom d'utilisateur global pour Git
git config --global user.name "Nivine" 

# Configurer l'adresse email globale pour Git
git config --global user.email nivine.haris11@gmail.com

# Créer un nouveau répertoire de travail pour le projet
mkdir MU5EES05

# Entrer dans le répertoire MU5EES05
cd MU5EES05

# Initialiser un nouveau dépôt Git dans ce répertoire
git init

# Créer les sous-dossiers pour chaque partie du projet
mkdir Partie_1
mkdir Partie_2
mkdir Partie_3
mkdir Partie_4
mkdir Partie_5
mkdir Partie_6

# Se déplacer dans le répertoire de la première partie
cd Partie_1

# Créer des sous-dossiers pour les laboratoires 1 et 2
mkdir lab1
mkdir lab2
mkdir lab3

# creer le fichier md dans lab2
# Revenir au répertoire racine du projet
cd ..

# Ajouter tous les fichiers et dossiers créés à la "staging area" de Git (en préparation pour un commit)
git add .

# Faire un commit avec un message décrivant le travail (ici "CR_Module")
git commit -m "CR_Module"

# Ajouter un dépôt distant (remote) avec l'URL de ton dépôt GitHub
git remote add origin https://github.com/nivine-11/MU5EES05.git

# Pousser (envoyer) le commit local vers le dépôt distant (GitHub) sur la branche "master" et définir "origin" comme référence par défaut
git push -u origin master

