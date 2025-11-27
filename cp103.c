#include<stdio.h>
int main(){
    float kilometre;
    float meter;
    float foot;
    float inches;
    float centimetre;

    printf("enter the distance between two cities");
    scanf("%f",&kilometre);

    meter=kilometre*1000;
    foot=meter*3.280884;
    inches=foot*12;
    centimetre=kilometre*100000;

    printf("distance in meter %.2f\n",meter);
    printf("distance in foot %.2f\n",foot);
    printf("distance in inches %.2f\n",inches);
    printf("distance in kilometre %.2f\n",kilometre);

    return 0;

}
