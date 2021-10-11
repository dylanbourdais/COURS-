#include <stdio.h>
#include <string.h>

//Exercice 4 : écrire un programmer qui permet d'écrire dans un fichier CSV, le modèle de la voiture et sa plaque d'immatriculation.
//bien entendu vous n'avez plus le droit d'utiliser la librairie CS50

int main(void)
{
    FILE * file = fopen("exercice4.csv" , "a"); // cree un document exercice4 
    if(!file) // si exite pas alors 
    {
        return 1; // ajoute 1
    }

    char voiture[20]; // variable voiture à 20 caratere
    char plaque[8]; // variable plaque à 8 caratere
    
    printf("modele de voiture : "); // ecrire modele de voiture
    scanf("%s",voiture); // taper modelle voiture 

    printf("plaque : "); // ecrire plaque 
    scanf("%s",plaque); // taper la plaque 

    fprintf(file, "%s , %s \n" , voiture , plaque); // ecrire dans le ficher modele et la plaque 

    fclose(file); // fermer le fichier 
}