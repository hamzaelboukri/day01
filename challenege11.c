#include <stdio.h>
  int main (){
    float Surface, longueur  ,largeur;
    
    printf("entree longueur  :");
        scanf("%f",&longueur);
     printf("entree largeur  :");
         scanf("%f",&largeur);
Surface= longueur * largeur;
  printf("Surface %.1f*%.1f=%.1f",Surface,longueur , largeur);
    
return 0;

  }