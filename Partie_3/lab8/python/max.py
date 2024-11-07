def max_value(tab):
    max_val =tab[0]  # Initialiser avec le premier élément
    for num in tab:
        if num > max_val:
            max_val = num  # Mettre à jour le maximum si un plus grand nombre est trouvé
    return max_val