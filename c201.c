#include <stdio.h>
int main () {
    float centigrade;
    float fahrenheit;

    printf("enter temperature in fahrenheit");
    scanf("%f",&centigrade);


    fahrenheit=(9*centigrade)/5+32;


    printf("temperature in centigrade %f",fahrenheit);


}
