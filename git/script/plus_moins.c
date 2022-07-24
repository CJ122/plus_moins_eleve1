#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>


int choix_joueur, valeur_a_trouver, r;

//Fonction pour générer un nombre aléatoire entre 0 et 100
void plus_moins(int r)
{
  srand(time(NULL));
  valeur_a_trouver = rand() % r;
    
    
  //On utilise le do-while loop tant que l'utilisateur essaye de deviner la bonne valeur
  do{   
    
    scanf("%d", &choix_joueur);
    //Quand l'utilisateur choisi une valeur moins que la bonne valeur
    if (choix_joueur < valeur_a_trouver)
    {
      printf("La bonne valeur est plus!\n");
      printf("Veuillez choisir de nouveau une valeur: ");
    }
  
    //Quand l'utilisateur choisi une valeur plus grande que la bonne valeur  
    else if (choix_joueur > valeur_a_trouver)
    {
      printf("La bonne valeur est moins!\n");
      printf("Veuillez choisir de nouveau une valeur: ");
    }
    //Quand l'utilisateur a choisi la bonne valeur
    else 
      printf ("Bingo!\nVous avez eu la bonne valeur!");
  } while (choix_joueur != valeur_a_trouver);
}


int main()
{
    int r = 100;
   
    printf("Deviner la bonne valeur entre 0 et 100: ");
    
    //Appel de la fonction plus_moins
    plus_moins(r);
    return 0;
}
