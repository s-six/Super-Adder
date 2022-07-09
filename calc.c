/* Ceci est mon premier projet en C soyez donc indulgent :) */
 


#include <stdio.h>

int main()
{ 
  /* Initialise les valeurs à rentrer*/ 
  int num1 = 0 ;
  int num2 = 0 ;
  int rslt;
  
  
  /* On demande a l'user sa requête*/
  printf("Quel calcul voulez-vous effectuer avec \n");
  printf("Le SUPER ADDITIONNEUR !  \n");
 

  /* On récupère les entrées de l'user*/
  scanf("%d", &num1);
  scanf("%d", &num2);
  /* On additionne les 2 entrées */
  rslt = num1 + num2; 

  printf("Le resultat est %d", rslt);

  return 0;


}




