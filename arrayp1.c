#include<stdio.h>
int main(){
    int a[5];
    int i;

    printf("enter 5 number");

    for( i=0; i<5; i=i+1){
        scanf("%d\n",&a[i]);
    }

    //for( i=0; i<5; i=i+1){
      //  printf("%d",a[i]);
    // }

    printf("%d", a[0]);
    printf("%d", a[1]);
    printf("%d", a[2]);
    printf("%d", a[3]);
    printf("%d", a[4]);

}
