#include<stdio.h>
int main(){

    int total_hours;
    int minutes;
    int hours;

    printf("enter total number");
    scanf("%d",&total_hours);

    hours=total_hours/60;
    minutes=total_hours%60;

    printf("hours %d", hours);
    printf("minutes %d",minutes);

    }
