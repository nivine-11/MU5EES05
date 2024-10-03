# Partie 3
git clone https://github.com/khachicha/MU5EES05_lab_4

# pour voir les fichier cache
ls -a

# pour supprimer un repertoire cache
rm -rf .git

# copier le contenu du repertoire deja clone au lab4


# Partie 4

ls -lrt  # voir la vrai taille des fichier 

# Partie 5
 non car sardar est un repertoire et ls -lrt permet d'afficher la taille du repertoire inode (4096 - 4Koctets)
 
# Partie 6
~/MU5EES05/Partie_2/lab4$ du Microsoft 
36      Microsoft

    # 36 koctets = 4k octets *12 = disc usage 
    en utilisant ls -lrt >> size = 34500 la vraie taille 

# Partie 7
~/MU5EES05/Partie_2/lab4$ stat Microsoft 
  File: Microsoft
  Size: 34359           Blocks: 72         IO Block: 4096   regular file
Device: 803h/2051d      Inode: 2502958     Links: 1
Access: (0664/-rw-rw-r--)  Uid: ( 1000/  nivine)   Gid: ( 1000/  nivine)
Access: 2024-09-19 11:28:16.896900000 +0200
Modify: 2024-09-19 11:23:54.934684000 +0200
Change: 2024-09-19 11:28:16.896900403 +0200
 Birth: 2024-09-19 11:28:16.896900403 +0200

# Partie 8 (voir les fichier cache)
ls -a
.  ..  answering-machine.txt  cr_lab4.md  Microsoft  README.md  sardar

# Partie 9 (trie du plus anciens au plus recent )
ls -lt --reverse
total 120
-rw-rw-r-- 1 nivine nivine    32 sept. 19 11:23 README.md
-rw-rw-r-- 1 nivine nivine 34359 sept. 19 11:23 Microsoft
drwxrwxr-x 2 nivine nivine  4096 sept. 19 11:23 sardar
-rw-rw-r-- 1 nivine nivine 70408 sept. 19 11:23 answering-machine.txt
-rw-rw-r-- 1 nivine nivine   153 sept. 19 11:52 cr_lab4.md
# Partie 10
ls -lS --reverse
total 120
-rw-rw-r-- 1 nivine nivine    32 sept. 19 11:23 README.md
-rw-rw-r-- 1 nivine nivine   153 sept. 19 11:52 cr_lab4.md
drwxrwxr-x 2 nivine nivine  4096 sept. 19 11:23 sardar
-rw-rw-r-- 1 nivine nivine 34359 sept. 19 11:23 Microsoft
-rw-rw-r-- 1 nivine nivine 70408 sept. 19 11:23 answering-machine.txt

# Partie 11 _ affichage du contenu du fichier 
cat answering-machine.txt

# Partie 12 
less answering-machine.txt

..q

# Partie 13-14
nano answering-machine.txt

ctrl+/
ctrl + v : last line 

# partie 15 
ctrl + s

# Partie 20  afficher 20 derniers lignes de sardar3.txt
tail -20 sardar/sardar3.txt


# Partie 21 (chercher trust dans le fichier Microsoft)
grep trust Microsoft

# Partie 22 (chercher money dans tout les repertoires)
grep -r money

# Partie 23 recherche avec case-insensitive,
grep -r -i Money

# Partie 24 changer le nom pour qu'il ne soit plus cache
mv .lightbulb lightbulb

# Partie 25
@nivine-virtual-machine:~/MU5EES05/Partie_2/lab4/sardar$ 

# Partie 26 move sardar3.txt >> lab3
mv sardar3.txt /home/nivine/MU5EES05/Partie_1/lab3

# Partie 28 remove microsoft 
rm Microsoft 

# Partie 29 lien symbolique
ln -s ./sardar/sardar1.txt link1
ln -s ./sardar/sardar2.txt link2
cat link1
cat link 2

# Partie 31 Supprimer le fichier sardar/sardar2.tx (le lien se casse)
rm sardar2.txt
lrwxrwxrwx 1 nivine nivine    20 sept. 25 09:30 link2 -> ./sardar/sardar2.txt (le lien c'est casse)

# Partie 32 modification des droits d'ecriture (read only)
chmod u-w sardar1.txt
nano sardar1.txt #unwritable

# Partie 33 modification des droits d'ecriture (read and write) 
chmod u+w sardar1.txt
-rw-rw-r-- 1 nivine nivine 13836 sept. 19 11:23 sardar1.txt
nano sardar1.txt 
ctrl+s
ctrl+X

# Partie 34 compresser archiver 
tar jcvf lab4.tar.bz2 /home/nivine/MU5EES05/Partie_2/lab4

# Partie 35
tar jtvf lab4.tar.bz2
