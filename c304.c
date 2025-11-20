#include <stdio.h>
int main() {
    int a,b,c;

    printf("enter number a ");
    scanf("%d",&a);

    printf("enter number b ");
    scanf("%d",&b);

    printf("enter number c ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("the largest number is a");
    }else if (b>a && b>c){
        printf("the largest number is b");
    }else if (c>a && c>b){
        printf("the largest number is c");
    }else{
        printf("all number are equal");
    }





}
