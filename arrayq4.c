#include<stdio.h>
int main (){

        int a[4];
        int i;

        printf("enter a number");

        for(i=0; i<4; i=i+1){
            scanf("%d",&a[i]);
        }
        for(i=0; i<4; i=i+1){
            if(a[i]%2==0){
                printf("even\n");/
            }else{
                printf("odd\n");

            }
        }
    }

