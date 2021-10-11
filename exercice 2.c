#include <stdio.h>

//Exercice 2 : écrire un programme qui échange deux entiers saisis. afficher les entiers avant et après l'échange. bien entendu vous n'avez plus le droit d'utiliser la librairie CS50

int main(void)
{
   int a; // variable a
   
   int b; // variable b

   int echange; // variable echange 
   
   printf("premier entier :\n"); // ecrire premier entier 

   scanf("%i",&a); // taper la valeur entier 

   printf("deuxième entier :\n"); // ecrire premier entier 
   scanf("%i",&b); // taper la valeur entier 

    echange = a; // variable echange egal variable a
    a = b;  //  variable a est egal à la variable b 
    b = echange; // la variable b egal la variable echange 
    
   printf("Apres l'echange, le a entier = %i , et le b = %i entiers \n",a,b); // affiche le nombre et l'autre nombre 
}
