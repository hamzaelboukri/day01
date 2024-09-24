#include <stdio.h>
#include <math.h>

int main (){
    printf("Calcul de la distance entre deux points dans un espace 3D \n:");
 int  x2,z2,y2,x1,z1,y1;
 float distance ;
    printf("enter number x2 :");
        scanf("%d",&x2);
    printf("enter number x1 :");
        scanf("%d",&x1);    
    printf("enter number z2 :");
        scanf("%d",&z2);
    printf("enter number z1 :");
        scanf("%d",&z1);
    printf("enter number y2 :");
        scanf("%d",&y2);
    printf("enter number y1 :");
        scanf("%d",&y1);
         distance = sqrt (pow(x2-x1,2)+pow(z2-z1,2)+pow(y2-y1,2));
         printf("distance:(%d-%d^2)+(%d-%d^2)+(%d-%d^2)=%.2f",x2,x1,z2,z2,y2,y1,distance );
          




}
