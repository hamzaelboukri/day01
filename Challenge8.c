#include <stdio.h>
#include <math.h>

int main (){
    int a,b,c;
  float  Moyenne_geometrique;
    printf("enter number a :");
        scanf("%d",&a);
    printf("enter number b :");
        scanf("%d",&b);
    printf("enter number c :");
        scanf("%d",&c); 

Moyenne_geometrique =pow((a * b * c ), (3));

printf("Moyenne_geometrique:%d*%d*%d^1/3=%f",a,b,c,Moyenne_geometrique);

return 0;





}