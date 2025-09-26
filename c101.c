#include<stdio.h>
int main () {
    float r;
    float p;
    float a;

    printf("enter the radius: ");
    scanf("%f",&r);

    p=2*3.14*r;
    a=3.14*r*r;


    printf("perimeter of circle %f",p);
    printf("area of circle %f",a);

}
