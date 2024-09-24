#include <stdio.h>
  int main (){
    int a,b,c;
    printf("enter number a:");
    scanf("%d",&a);
    printf("enter number b:");
    scanf("%d",&b);
    c=a+b;
    printf("lasome : a+b=%d+%d=%d \n",a,b,c);
    c=a-b;
    printf("la maines : a-b=%d+%d=%d \n",a,b,c);
    c=a*b;
    printf("la fois : a*b=%d+%d=%d \n",a,b,c);
    
    if (b==0){
            printf("errour");
          
          }
    else
    {
      printf("a/b=%d",a/b);
    }
    


















    return 0;
  }