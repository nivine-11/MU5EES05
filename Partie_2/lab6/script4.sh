#!/bin/bash

for i in {1..10}; do
    # Télécharger la page HTML
    wget -q -O "$i.html" "http://xkcd.com/$i"

    image_url=`grep -i hotlink "$i.html" | grep -o 'https[^"]*' | head -1`
  
    wget -q -O "image$i.jpg" "$image_url"
    
    eog "image$i.jpg" &
        
done
