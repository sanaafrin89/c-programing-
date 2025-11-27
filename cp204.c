#include<stdio.h>
int main(){
    int total_minutes;
    int hours;
    int minutes;

    printf("enter total number of minutes");
    scanf("%d",&total_minutes);

    hours=total_minutes/60;
    minutes=total_minutes%60;

    printf("number of hours =%d", hours);
    printf("number of minutes =%d", minutes);

    return 0;

}
