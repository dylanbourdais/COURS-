#include <stdio.h>


//Exercice 3 : écrire un programme qui affiche le plus grand de trois entiers saisis. bien entendu vous n'avez plus le droit d'utiliser la librairie CS50


int main (void)
{
  int a; // variable a
  printf("premier entier: "); // ecrire a
  scanf("%i",&a); // tape une valeur 
  
  
  int b; // variable b
  printf("deuxième entier : "); //ecrire b
  scanf("%i",&b); // tape une valeur
  
  int c; // variable c
  printf("troisième entier : "); // ecrire c
  scanf("%i",&c); // tape la valeur 
  
  int max; // variable  max
  
  if(a > b) // si la variable a est superieur variable b alors
  {
    max = a; // affiche valeur a 
  }
  else if (b > c) // sinon si la varible b est superieur c
  {
    max = b; // affiche valeur b
  }
  else // sinon 
  {
    max = c; // affiche valeur c
  }
  
 printf("le plus grand nombre %i" , max); // affiche le plus grand nombre 

}