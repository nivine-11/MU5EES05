# Partie 1
git clone https://github.com/khachicha/MU5EES05_lab_5

# Partie 2
rm -rf .git
cp -dir MU5EES05_lab_5/ ~/MU5EES05/Partie_2/lab5/
mv MU5EES05_lab_5 ~/MU5EES05/Partie_2/lab5.1
rm -rf lab5
mv lab5.1 lab5

# Partie 3 history 
history
# Partie 4
history > history.txt

#Partie 5
entrer dans sardar : cat *> sardar_power.txt (1 > creer un nouveau fichier , 2 > prend le contenu pour le mettre dans le fichier)
cat *> sardar_power.txt 
mv sardar_power.txt lab5

# Partie 6 
wc sardar_power.txt
  1980  16783 101780 sardar_power.txt
  
# Partie 7 
grep -i singh sardar_power.txt

# Partie 8
rm sardar_power.txt

# Partie 9
cat sardar/* | grep -i "singh" (affiche)

grep -r -i singh | wc
grep: sardar3.txt: binary file matches
    122    1549    9899
    
# Partie 10
cat sardar/* | grep -r -i singh | grep -r -i santa | wc

# Partie 11 
 cat sardar/* | grep -r -i singh | grep -r -i santa | grep -v -i banta |  wc
 
# Partie 12
find . -name "*txt"

# Partie 13 
diff noyau.v1 noyau.v2
25,26c25,26
< PATCHLEVEL = 01
< SUBLEVEL = -rc1
---
> PATCHLEVEL = 02
> SUBLEVEL = -rc2
54c54
< export        SHELL CC GCC
---
> export        SHELL 

# Partie 14 
sudo apt install tkdiff 

tkdiff noyau.v1 noyau.v2

# Partie 15 
 diff -u noyau.v1 noyau.v2 > update.patch
nivine@nivine-virtual-machine:~/MU5EES05/Partie_2/lab5$ patch noyau.v1 < update.patch
patching file noyau.v1
nivine@nivine-virtual-machine:~/MU5EES05/Partie_2/lab5$ diff noyau.v1 noyau.v2
nivine@nivine-virtual-machine:~/MU5EES05/Partie_2/lab5$ tkdiff noyau.v1 noyau.v2


