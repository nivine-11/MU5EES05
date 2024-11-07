# Exemple de tableau
from max import max_value
from min import min_value
from var import variance

tableau = [4, 9, 10, 11, 12, 15, 12, 9, 0, 30]

# Calcul du maximum
max_val = max_value(tableau)
print(f"Le maximum du tableau est : {max_val}")

# Calcul du minimum
min_val = min_value(tableau)
print(f"Le minimum du tableau est : {min_val}")

# Calcul de la variance
var_val = variance(tableau)
print(f"La variance du tableau est : {var_val:.2f}")
