#include<stdio.h>
int main(){
    float radius;
    float perimeter;
    float area;
    float pi=3.14;

    printf("enter the raduis");
    scanf("%f",&radius);

    perimeter=2*pi*radius;
    area=pi*radius*radius;

    printf("perimeter of a circle %f", perimeter);
    printf("area of a circle %f", area);

    return 0;

}
