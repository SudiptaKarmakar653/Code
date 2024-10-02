#include<stdio.h>
int main(){
      

    int a,b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);


    a=a+b;
    b=a-b;
    a=a-b;
    printf("after switch a=%d",a);
    printf("\nafter switch a=%d\n",b);




    int c;
    c=b;
    b=a;
    a=c;
    printf("after switch a=%d",a);
    printf("\nafter switch a=%d",b);


      
      

      return 0;





}