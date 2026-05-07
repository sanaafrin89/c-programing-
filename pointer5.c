#include<stdio.h>
int main(){

    char A;
    char a= A;
    char *p=&a;
    p=p+1;

    printf("%c",p);

}
