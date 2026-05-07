#include<stdio.h>
int main(){
    int a=5;
    int *p=&a;



    printf("%d\n",p);

    p=p+1;

    printf("%d\n",p);


}
