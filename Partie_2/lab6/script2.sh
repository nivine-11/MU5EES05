#!/bin/bash



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
