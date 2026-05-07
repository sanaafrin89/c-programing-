#include<stdio.h>
int main(){
    int a[10];
    int *p;
    int i;

    printf("enter 10 number");

    for(i=0; i<10; i=i+1){

        scanf("%d\n", &a[i]);
    }

    p=a;
    printf("%d",*p);
    p=p+1;
    printf("%d",*p);
    p=p+1;
    printf("%d",*p);
    p=p+1;
    printf("%d",*p);
    p=p+1;
    printf("%d",*p);
    p=p+1;
    printf("%d",*p);
    p=p+1;
    printf("%d",*p);
    p=p+1;
    printf("%d",*p);
    p=p+1;
    printf("%d",*p);
    p=p+1;
    printf("%d",*p);


}

