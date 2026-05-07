#include<stdio.h>
int main(){
    int a[5];
    int b[5];
    int c[5];
    int *p;
    int i;



    for( i=0; i<5; i=i+1){
              printf("array of a [%d] :", i);
        scanf("%d",&a[i]);
    }





    for( i=0; i<5; i=i+1){
             printf("array of b [%d] :", i);
        scanf("%d",&b[i]);
    }

    c[0]=a[0]+b[0];
    c[1]=a[1]+b[1];
    c[2]=a[2]+b[2];
    c[3]=a[3]+b[3];
    c[4]=a[4]+b[4];


    p=c;
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
