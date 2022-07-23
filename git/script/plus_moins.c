
#include <stdio.h>

int choix_joueur,valeur_a_trouver;


void plus_moins()
{
//On utilise le do-while loop tant que l'utilisateur essaye de deviner la bonne valeur
do{ 
scanf("%d", &choix_joueur);

//Quand l'utilisateur choisi une valeur moins que la bonne valeur
if (choix_joueur < valeur_a_trouver)
{
printf("La bonne valeur est plus!");
}

//Quand l'utilisateur choisi une valeur plus grande que la bonne valeur 
else if (choix_joueur > valeur_a_trouver)
{
printf("La bonne valeur est moins!");
}
//Quand l'utilisateur a choisi la bonne valeur
else 
printf ("Bingo!\n");
} while (choix_joueur != valeur_a_trouver);
}


int main()
{
valeur_a_trouver = 4;
printf("Deviner la bonne valeur: ");
//Appel de la fonction plus_moins
plus_moins();
return 0;
}
