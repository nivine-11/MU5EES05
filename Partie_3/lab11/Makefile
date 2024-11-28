
# Variables
CC = gcc
CFLAGS = -Wall -I. -fPIC
LDFLAGS = -shared
BINARY = my-binary
LIBRARY = liboutils.so
INSTALL_DIR = $(HOME)
OBJ_FILES = max.o min.o var.o test.o

# Cibles par défaut
all: $(BINARY)

# Création des fichiers objets
max.o: max.c max.h
    $(CC) $(CFLAGS) -c max.c -o max.o

min.o: min.c min.h
    $(CC) $(CFLAGS) -c min.c -o min.o

var.o: var.c var.h
    $(CC) $(CFLAGS) -c var.c -o var.o

test.o: main.c max.h min.h var.h
    $(CC) $(CFLAGS) -c main.c -o test.o

# Création de la bibliothèque partagée
