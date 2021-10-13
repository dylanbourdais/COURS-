#include <stdio.h> // librairie stdio
#include <cs50.h> //librairie cs50

// mon code est le bute d'aider pour savoir combien de timbre pour la lettre

int main(void)
{

    int gramme = get_int("Combien de gramme votre lettre : "); //variable gramme , ecrire combien gramme votre lettre , et demande utulisateur

    if (gramme <= 20) // si gramme est inferieur 20 gramme alors
    {
       printf(" Pour %i g vous avez besoin 1 timbres \n", gramme); // affiche pour 20 gramme vous avez besoin 1 timbres
    }

    else if (gramme >= 21  &&  gramme <= 100) // sinon si  gramme est superieur egal 21 et gramme inferieur egal 100 alors
    {
       printf(" Pour %i g vous avez besoin 2 timbres \n", gramme); // affiche pour 21 jusque a 100 gramme vous avez besoin 2 timbres
    }

    else if (gramme >= 101 &&  gramme <= 250) // sinon si  gramme est superieur egal 101 et gramme inferieur egal 250 alors
    {
       printf(" Pour %i g vous avez besoin 4 timbres \n", gramme); // affiche pour 101 jusque a 250 gramme vous avez besoin 4 timbres
    }

    else if (gramme >= 251 && gramme <= 500) // sinon si  gramme est superieur egal 251 et gramme inferieur egal 500 alors
    {
       printf("Pour %i g vous avez besoin 6 timbres \n", gramme); // affiche pour 251 jusque a 500 gramme vous avez besoin 6 timbres
    }

    else if (gramme >= 501 && gramme <= 3000) // sinon si  gramme est superieur egal 501 et gramme inferieur egal 3000 alors
    {
       printf("Pour %i g vous avez besoin 8 timbres \n", gramme); // affiche pour 501 jusque a 3000 gramme vous avez besoin 8 timbres
    }

    else // sinon
    {
       printf("Allez voir la facteur ou la factrice \n"); // affiche allez voir la facteur ou la factrice
    }

}


