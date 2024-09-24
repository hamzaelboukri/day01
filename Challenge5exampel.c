#include <stdio.h>
int main (){
    int a,b,choix  ;
    printf("enter the number a :");
    scanf("%d",&a);
    printf("enter the number b :");
    scanf("%d",&b);
    printf("Calcul\n");
    printf("1_a+b\n");
    printf("2_a-b\n");
    printf("3_a*b\n");
    printf("4_a/b\n");
    scanf("%d",&choix);
    
    switch (choix)
    {
    case 1:
          printf("a+b=%d",a+b);
        break;
     case 2:
          printf("a-b=%d",a-b); 
     case 3:
          printf("a*b=%d",a*b);
    case 4:
     if (b==0){
            printf("errour");
          }
          
         
     
    default: 
    printf("a/b=%d",a/b);
        break;
    }
    return 0;
}