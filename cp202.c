#include<stdio.h>
int main(){
    float radius;
    float volume;

    printf("radius of a sphere");
    scanf("%f",&radius);

    volume=(4*3.14*radius*radius*radius)/3;

    printf("volume of a sphere %f",volume);

    return 0;

}
