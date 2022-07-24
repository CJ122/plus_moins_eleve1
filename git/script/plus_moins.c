#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int choix_joueur, valeur_a_trouver, r, mod_diff, ess;

//Fonction pour générer un nombre aléatoire entre 0 et 100
void plus_moins(int r)
{
  srand(time(NULL));
  valeur_a_trouver = rand() % r;
    
  scanf("%d", &mod_diff);
 
  //On utilise le do-while loop tant que l'utilisateur essaye de deviner la bonne valeur.
  do{
    //la mode de difficulté facile
    if (mod_diff == 1)
    {
      printf ("Mode Facile--->Vous avez un nombre d'essaie sans limites.\n");
      printf ("Deviner la bonne valeur: "); 
      
      for(;;){
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
        {
          printf ("Bingo!\nVous avez eu la bonne valeur!");
          break;
        }
      }
    }
  
  

    
    //la mode de difficulté moyenne
    if (mod_diff == 2)
    {
      printf ("Mode Moyen--->Vous avez un nombre d'essaie de 25.\n");
      printf ("Deviner la bonne valeur: "); 
      ess=25;
      for (int i = 25; i > 0; i--)
      {
        
        scanf("%d", &choix_joueur);
        //Quand l'utilisateur choisi une valeur moins que la bonne valeur
        if (choix_joueur < valeur_a_trouver)
        {
          printf("La bonne valeur est plus!\n");
          printf("Veuillez choisir de nouveau une valeur: ");
          ess--;
        }
  
      //Quand l'utilisateur choisi une valeur plus grande que la bonne valeur  
        else if (choix_joueur > valeur_a_trouver)
        { 
          printf("La bonne valeur est moins!\n");
          printf("Veuillez choisir de nouveau une valeur: ");
          ess--;
        }
        //Quand l'utilisateur a choisi la bonne valeur
        else 
        {
          printf ("Bingo!\nVous avez eu la bonne valeur!");
          break;
        }
          
        //Si nombre d'essaies est au Maximum.
        if (i == 0)
        {
          printf("Maximum nombre d'essaies. Vous avez perdu.");
        }
      }
    }

    
    //la mode de difficulté difficile
    if (mod_diff == 3)
    {
      printf ("Mode difficile--->Vous avez un nombre d'essaie de 10.\n");
      printf ("Deviner la bonne valeur: "); 
      ess=10;
      for (int i = 10; i > 0; i--)
      {
        
        scanf("%d", &choix_joueur);
        //Quand l'utilisateur choisi une valeur moins que la bonne valeur
        if (choix_joueur < valeur_a_trouver)
        {
          printf("La bonne valeur est plus!\n");
          printf("Veuillez choisir de nouveau une valeur: ");
          ess--;
        }
  
      //Quand l'utilisateur choisi une valeur plus grande que la bonne valeur  
        else if (choix_joueur > valeur_a_trouver)
        { 
          printf("La bonne valeur est moins!\n");
          printf("Veuillez choisir de nouveau une valeur: ");
          ess--;
        }
        //Quand l'utilisateur a choisi la bonne valeur
        else 
        {
          printf ("Bingo!\nVous avez eu la bonne valeur!");
          break;
        }
          
        //Si nombre d'essaies est au Maximum.
        if (i == 0)
        {
          printf("Maximum nombre d'essaies. Vous avez perdu.");
        }
      }
    }
  }while(choix_joueur != valeur_a_trouver);
    
}
    
    
    

int main()
{
    int r = 100;
    printf("Bienvenue au jeu plus ou moins!\n");
    printf("Vous avez 3 modes de difficulte: 1 pour facile\t2 pour moyen\t 3 pour difficile\n");
    printf("Entrez le chiffre du mode de difficulté: ");
     
    //Appel de la fonction plus_moins
    plus_moins(r);
    return 0;
}
