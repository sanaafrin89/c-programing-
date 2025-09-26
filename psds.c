#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    int d;

    printf("enter first value; ");
    scanf("%d",&a);

    printf("enter second value; ");
    scanf("%d",&b);

    c=a*b;
    d=a+b;
    a=a-b;
    b=a/b;

    printf("product=");
    printf("\n%d",c);

    printf("sum=");
    printf("\n%d",d);

    printf("sub=");
    printf("\n%d",a);

    printf("div=");
    printf("\n%d",b);
}
