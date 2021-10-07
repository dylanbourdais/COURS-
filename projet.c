#include <stdio.h>
#include <cs50.h>
#include <string.h>

/******

Niveau 1 :
Chaque catégorie (filmCategorieEnfant, filmCategorieAdos, filmCategorieAdulte) de film correspond à un tableau de données (trois films par catégorie).

- Si elle a moins de 11 ans, elle peut aller voir Films Categorie Enfant
- Si elle a entre 11 et 17, elle peut aller voir Films Categorie Ados
- Si elle a plus de 18 ans, elle peut aller voir Films Categorie Adulte

Niveau 2 :
L'utilisateur peut dire si oui ou non il souhaite aller voir le film proposé.
Par exemple :
Film catégorie adulte contient "The Shining", "La Nonne" et "Conjuring". On propose à une personne ayant 20 ans d'aller voir The Shining, si elle dit oui, on s'arrête dans les propositions,
sinon, on lui propose La Nonne. Idem pour le dernier élément du tableau.
Si elle ne veut voir aucun de ces trois films.

Niveau 3 (optionnel) :
Si aucun des films de la catégorie adulte ne lui convient, on lui propose de choisir une autre catégorie (une catégorie enfant ou ados), en lui proposant à nouveau les choix respectifs de ces catégories.*************/





int main(void)
{


    int film = get_int("donner votre age pour le film : ");//entrer sont age

    string filmCategorieEnfant[3]= {"paw patrol la pat'Patrouille","bienvenue loud","avatar dernier maître"};//catégorie (filmCategorieEnfant),à un tableau de données (trois films par catégorie).
    string filmCategorieAdos  [3]= {"13 reasons why","Gossip Girl","teen wolf"};//catégorie (filmCategorieAdos),à un tableau de données (trois films par catégorie)
    string filmCategorieAdulte[3]= {"the shining","la nonne","conjuring"};//catégorie ( filmCategorieAdulte),à un tableau de données (trois films par catégorie)





	if( film < 11)//Si elle a moins de 11 ans
	{
		printf("elle peut aller voir Films Categorie Enfant\n");// elle peut aller voir Films Categorie Enfant
	}
	else if( film <= 17)//Si elle a entre 11 et 17
	{
		printf("elle peut aller voir Films Categorie Ados\n");//elle peut aller voir Films Categorie Ados
	}
	else if( film >= 18)//Si elle a plus de 18 ans
	{
		printf("elle peut aller voir Films Categorie Adulte\n");//elle peut aller voir Films Categorie Adulte
	}
	else
	{
		printf("erreur\n"); // sinon erreur 

	}





	for (int i = 0;  i < 3; i++){  // refaire 3 fois la requete 

    char categorie = get_char("choissier votre film  dite Y OU N "); //L'utilisateur peut dire si oui ou non il souhaite aller voir le film proposé.


	if (( categorie == 'Y' || categorie == 'y') || (categorie == 'N' && categorie == 'n' )) //Si elle aime le film mais oui ou non
	 {
	 printf ("film %s \n" ,filmCategorieEnfant[0] );// affiche chaine de caratere en question
 
	 }

	  else if ((categorie == 'Y' || categorie == 'y') || (categorie == 'N' || categorie == 'n' )) //Sinon si  elle aime le film mais oui ou non

	 {

	 printf ("film %s \n" ,filmCategorieEnfant[1] );// affiche chaine de caratere en question

	 }


	  else if (( categorie == 'Y' || categorie == 'y') || (categorie == 'N' || categorie == 'n' ))//Sinon si  elle aime le film mais oui ou non
	 {
	 printf ("film %s  \n" ,filmCategorieEnfant[2] );// affiche chaine de caratere en question

	 }

	 else
	 {
	  printf(" AU REVOIR "); //Sinon c'est au revoir

	 }

	 }






}





