#include<stdio.h>
int main (){

    int a[3][4];
    int b[3][4];
    int c[3][4];
    int i;
    int j;

    printf("enter 4 number");

    for(i=0; i<3; i=i+1){
        for(j=0; j<4; j=j+1){
            scanf("%d",& a[i][j]);
        }
    }

     for(i=0; i<3; i=i+1){
        for(j=0; j<4; j=j+1){
            scanf("%d",& b[i][j]);
        }
    }

    c[i][j]=a[i][j]+b[i][j];

     for(i=0; i<3; i=i+1){
        for(j=0; j<4; j=j+1){
            printf("%d", a[i][j]);
        }
    }
}
