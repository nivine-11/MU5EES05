#Partie_1
sudo apt install gcc-aarch64-linux-gnu g++-aarch64-linux-gnu

#Partie_2
dpkg -L 
#Partie_3
nano ~/.bashrc
source ~/.bashrc
echo $ARCH


nano Makefile
make

pc : ./my-binary
bash: ./my-binary: cannot execute binary file: Exec format error

scp my-binary pi@192.168.0.1:Documents
pi@192.168.0.1's password: 
my-binary                                     100%   13KB 


ssh pi@192.168.0.1
pi@192.168.0.1's password: 


