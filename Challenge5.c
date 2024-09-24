#include <stdio.h>
  int main (){
    float c;
      printf(" la temperature en Celsius et affiche l etat de l eau :");
       scanf("%f",&c);
        if (c<0)
        {
            printf("L etat de leau est :Solide");
            
        }
        else if (0 > c && c <=100)
        {
           printf("L etat de leau est :Liquide");
        }
         else 
         printf("L etat de leau est :Gaz");
         


        

         










return 0;

  }