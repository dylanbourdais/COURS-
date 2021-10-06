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


    int film = get_int("donner votre age pour le film : ");
    
    const char filmCategorieEnfant[0]= {"paw patrol la pat'Patrouille","bienvenue loud","avatar dernier maître"};
    const char filmCategorieAdos  [1]= {"13 reasons why","Gossip Girl","teen wolf"};
    const char filmCategorieAdulte[2]= {"the shining","la nonne","conjuring"};



	

	if( filmCategorieEnfant[0] < 11)
	{
		printf("elle peut aller voir Films Categorie Enfant\n");
	}
	else if( filmCategorieAdos[1] >= 11 && filmCategorieAdos[1] <= 17)
	{
		printf("elle peut aller voir Films Categorie Ados\n");
	}
	else if( filmCategorieAdulte[2] >= 18)
	{
		printf("elle peut aller voir Films Categorie Adulte\n");
	}
	else
	{
		printf("erreur\n");
	}

}



