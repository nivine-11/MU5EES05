## Partie_3 
sudo dmseg : verification que le port usb est 

## Partie_4 Installation de picocom un programme de communication série pour interagir avec la carte via le port série
sudo apt install picocom

## Partie_5 Vérifier les permissions sur le port série
ls -l /dev/ttyUSB0
sudo adduser nivine dialout

## Partie_6 Redémarrer pour appliquer les changements
reboot
cat /etc/group
(Vérifie si l’utilisateur fait bien partie du groupe dialout)


## Partie_7 Démarrer une session série avec picocom
-b 115200 /dev/ttyUSB0

## Connexion via Ethernet
## Partie_9  Identifier les interfaces réseau ()
ifconfig 


## Partie 12 Configurer les adresses IP  (Pour permettre une communication entre le PC et la carte)
pc IPV4 : 192.168.0.2
carte IPV4 : 192.168.0.1


## Partie 16 lanecement de ping
pc : ping 192.168.0.1


## Connexion SSH
##  Partie_17 Activer le serveur SSH sur la carte
sudo raspi-config

## Partie_18 Vérifier que le serveur SSH est actic
sudo service ssh status


## Partie_19 Installer un client SSH sur le PC
sudo apt update
sudo apt install openssh-client

## Partie_20 
pc : ssh pi@192.168.0.1

## Partie_21
scp /home/nivine/MU5EES05/Partie_3/lab8/max.c pi@192.168.0.1:Downloads

un client VNC pour permettre l'accès au bureau graphique de la carte.



