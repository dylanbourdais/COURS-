#include <stdio.h>

//Exercice 1 : écrire un programme qui saisit deux entiers et affiche leur produit.
//bien entendu vous n'avez plus le droit d'utiliser la librairie CS50

int main (void)
{
  int a; // variable  a
  printf("a : "); // ecrire a
  scanf("%i",&a); //taper la valeur de a 
  
  
  int b; // variable b
  printf("b : "); // ecrire b
  scanf("%i",&b); // taper la valeur de b
  
  int total = a * b; // a fois b 
  
  printf("Produit a et b = %i \n",total); // affiche a et b = le nombre en question
}