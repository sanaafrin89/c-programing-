#include<stdio.h>
int main(){
    int a[5];
    int b[5];
    int c[5];
    int i;

    printf("enter the value of a");

    for(i=0; i<5; i=i+1){
        scanf("%d",&a[i]);
    }

    printf("enter the value of b");
     for(i=0; i<5; i=i+1){
        scanf("%d",&b[i]);
    }

    //c[i]=a[1]+b[i];

    c[0]=a[0]+b[0];
    c[1]=a[1]+b[1];
    c[2]=a[2]+b[2];
    c[3]=a[3]+b[3];
    c[4]=a[4]+b[4];


    for(i=0; i<5; i=i+1){
      printf("c is : %d", c[i]);

    }
    //c[i]=a[1]+b[i];


    //c[0]=a[0]+b[0];
    //c[1]=a[1]+b[1];
    //c[2]=a[2]+b[2];
    //c[3]=a[3]+b[3];
    //c[4]=a[4]+b[4];

    //for(i=0; i<5; i=i+1){
    //        printf("the value of c is : %d", c[i]);
    //}

}
