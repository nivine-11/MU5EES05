def min_value(tab):
    min_val = tab[0]  # Initialiser avec le premier élément
    for num in tab:
        if num < min_val:
            min_val = num  # Mettre à jour le minimum si un plus petit nombre est trouvé
    return min_val