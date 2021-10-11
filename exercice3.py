#Exercice 3 : écrire un programme qui affiche le plus grand de trois entiers saisis

a = int(input("premier entier: "))# varible a ecrire taper une valeur

b = int(input("deuxième entier : "))# variable b ecrire taper une valeur

c = int(input("troisième entier : "))# variable c ecrire taper une valeur



if a > b: # si variable a superieur à variable b alors
   max = a # varible max affiche valeur a
elif b > c: # sinon si variable b est superieur varible c
   max = b #  varible max affiche la valeur b
else: # sinon 
   max = c #  varible max affiche la valeur c

print("le plus grand nombre",max) # affiche le nombre le plus grand 