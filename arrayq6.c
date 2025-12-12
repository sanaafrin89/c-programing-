#include<stdio.h>
int main(){
    int a[4];
    int sum=0;
    int i;

    printf("enter 4 number");

    for(i=0; i<4; i=i+1){
        scanf("%d", &a[i]);

    }

    sum=sum+a[0];
    sum=sum+a[1];
    sum=sum+a[2];
    sum=sum+a[3];

    printf("%d", sum);

}
