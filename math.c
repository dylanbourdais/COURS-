//Vous devez réaliser un programme sans utiliser les petites roulettes de la bibliothèque cs50.h.


//Soit ABC un triangle rectangle en B, l'hypoténuse est le côté opposé à l'angle droit (il n'est pas adjacent à l'angle droit). C'est le plus grand des côtés du triangle rectangle.



//Vous devez créer un programme permettant de calculer l'hypoténuse en fonction des longueurs 
//-Longueur de AB (en cm) 
//-Longueur de BC (en cm)


//C'est longueur doivent être "dynamique", c'est à dire qu'au début du programme, le programme vous pose les questions suivantes : 
//-Quelle est la longueur de AB?
//-Quelle est la longueur de BC?


//Ensuite vous devez afficher un message du type :
//La longueur de l'hypoténuse est de ___ cm.


//Vous devenez pousser votre code sur Github et nous partager le lien de votre dépôt.


//Indice : il faut bien entendu utiliser le théorème de Pythagore.


#include <stdio.h>
#include <math.h>



int main(void)
{
    printf("Quelle est la longueur de AB ? \n");//on demande la longeur de AB
    double AB;
    scanf("%lf", &AB); // taper la longeur AB
    printf("Quelle est la longueur de BC ?\n");//on demande la longeur de BC
    double BC;
    scanf("%lf", &BC); // taper la longeur BC
    
    AB *= AB; // AB fois le nombre
    BC *= BC; // BC fois le nombre
    

    double total = sqrt(AB + BC); // racine carre  AB + BC 

    printf(" l'hypoténuse est de %.2f cm \n", total); // le resultat  
}