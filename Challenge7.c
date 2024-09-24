#include <stdio.h>

int main (){
float number1,number2,number3,moyenne ,lasome;

      printf("entre number 1 : ");
             scanf("%f",&number1);
    printf("entre number 2 : ");
             scanf("%f",&number2);
    printf("entre number 3 : ");
            scanf("%f",&number3);

            lasome=number1+number2+number3;
            moyenne=lasome/3;
        
            printf("lamoyenne :%.2f/%d=%.2f",lasome,3,moyenne);

             
    
}