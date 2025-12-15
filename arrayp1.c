#include<stdio.h>
int main(){
    int a[5];
    int i;

    printf("enter 5 number");

    for( i=0; i<5; i=i+1){
        scanf("%d\n",&a[i]);
    }

    for( i=0; i<5; i=i+1){
        printf("%d",a[i]);
   }

}
