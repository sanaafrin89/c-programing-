#include<stdio.h>
int main(){
    float fahrenheit;
    int centigrade;

    printf("temperature in centigrade");
    scanf("%d",&centigrade);

    fahrenheit=(9*centigrade)/5+32;

    printf("temperature in fahrenheit=%f",fahrenheit);

    return 0;

}
