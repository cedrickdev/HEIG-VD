import sys
 
print(sys.version)  # print Python version

print("Hello Feze!")  # print a string

"""
This is a comment
written in
more than just one line
"""

# Une variable est créée au moment où vous lui attribuez pour la première fois une valeur. 
x = 5
y = "Feze"
print("le nombre est", x)
print("le nom est", y)

# Une variable peut etre modifiée plusieurs fois apres avoir été definie 
x = 4       # x is of type int
x = "Sally" # x is now of type str
print(x)


# Si vous voulez spécifier le type de données d'une variable, cela peut être fait avec le casting.
x = str(3)    # x will be '3'
y = int(3)    # y will be 3
z = float(3)  # z will be 3.0

# Vous pouvez obtenir le type de données d'une variable avec la fonction type()
x = 4  
print(type(x))


# Python vous permet d'attribuer des valeurs à plusieurs variables sur une seule ligne :
x, y, z = "Orange", "Banana", "Cherry"
print(x)
print(y)
print(z)


