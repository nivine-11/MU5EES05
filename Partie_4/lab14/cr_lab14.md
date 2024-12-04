## Partie_1
sudo apt install gcc-aarch64-linux-gnu g++-aarch64-linux-gnu

# Partie_2
dpkg -L gcc-aarch64-linux-gnu g++-aarch64-linux-gnu
aarch64-linux-gnu-

## Partie_3
nano ~/.bashrc 
export ARCH=arm
export CROSS_COMPILE=aarch64-linux-gnu-

source ~/.bashrc
echo $ARCH

## Partie_5
nano Makefile (CC = $(CROSS_COMPILE)gcc)

## Partie_6
make

## Partie_7 executer my-binary
pc : ./my-binary
bash: ./my-binary: cannot execute binary file: Exec format error

Le binaire généré :

    Ciblé pour une architecture ARM (raspberry pi),le système détecte que le binaire est incompatible avec l’architecture et retourne l’erreur 

## Partie_8 Transférer le binaire vers la carte raspberry PI.
scp my-binary pi@192.168.0.1:Documents
pi@192.168.0.1's password: 
my-binary                                     100%   13KB 


ssh pi@192.168.0.1
pi@192.168.0.1's password: 


