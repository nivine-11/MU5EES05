def variance(tab):
    n = len(tab)
    if n == 0:
        return 0  # Éviter la division par zéro si le tableau est vide
    mean = sum(tab) / n  # Calcul de la moyenne
    variance1 = sum((x - mean) ** 2 for x in tab) / (n-1)  # Calcul de la variance
    return variance1