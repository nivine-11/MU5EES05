CC = gcc

Objets = max.o min.o var.o testall.o 
direc = /home/nivine/
CC_OPTIONS = 
DEBUG = yes
Toto = my-binary

ifeq ($(DEBUG),no)
	CC_OPTIONS = -Wall
	else
	CC_OPTIONS = -g -Wall
endif
install: $(Toto)
	cp $(Toto) ${direc}

my-binary :  $(Objets)
	echo $(CC_OPTIONS)
	${CC} $(CC_OPTIONS) $^ -o $(Toto)

max.o: max.c
	$(CC) $(CFLAGS) -c $^ -o $@
min.o: min.c 
	$(CC) $(CFLAGS) -c $^ -o $@
var.o: var.c 
	$(CC) $(CFLAGS) -c $^ -o $@
testall.o: testall.c 
	$(CC) $(CFLAGS) -c $^ -o $@	

clean: 
	rm ${Objets} my-binary
