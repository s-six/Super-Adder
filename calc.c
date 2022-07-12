/* This is my first project in C so please bear with me :) */
 


#include <stdio.h>

int main()
{ 
  /* Initialize the values to enter */ 
  int num1 = 0 ;
  int num2 = 0 ;
  int rslt;
  
  
  /* We ask the user his request */
  printf("What calculation do you want to perform with \n");
  printf("the SUPER ADDER !  \n");
 

  /* We get the entries of the user */
  scanf("%d", &num1);
  scanf("%d", &num2);
  /* We add the 2 entries */
  rslt = num1 + num2; 

  printf("The result is %d", rslt);

  return 0;


}




