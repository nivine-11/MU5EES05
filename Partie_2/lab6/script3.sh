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

