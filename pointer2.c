#include<stdio.h>
int main(){
    int b;
    int *p=&b;

   printf("enter a number");
   scanf("%d",&b);

   printf("%p\n",&b);
   printf("%p",p);


}
