#include<stdio.h>
int main (){
    int a[10];
    int i;

    printf("enter 10 number");

    for(i=0; i<10; i=i+1){

        scanf("%d\n", &a[i]);
    }

    printf("%d\n",a[0]);
    printf("%d\n",a[5]);
    printf("%p\n",&a[0]);
    printf("%p\n",&a[6]);
    printf("%d\n",a);
    printf("%p",&a);


}
