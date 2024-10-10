1. touch script7.sh
# Affiche toutes les variables d’environnement existantes ainsi que leur valeur.

printenv

$HOME
2. echo $PATH

3. #!/bin/bash
ps -ef

4. sudo mv script7.sh /opt/ 
# sudo est utilisé pour exécuter la commande avec des droits d'administration.

5. export PATH=$PATH:/opt

6. script7.sh: command not found
# Le changement fait avec la commande ci-dessus ne sera valable que pour la session actuelle du terminal. Si j'ouvre un nouveau terminal, le PATH reviendra à sa configuration par défaut. 

7. nano ~/.bashrc
export PATH=$PATH:/opt
CTRL + O, puis Entrée, et quitter avec CTRL + X

source ~/.bashrc

8. script7.sh


9. cp ~/.bashrc /home/nivine/MU5EES05/Partie_2/lab7/script
