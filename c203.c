#include<stdio.h>
int main() {
    int hours;
    int minutes;
    int totalminutes;

    printf("enter hours");
    scanf("%d",&hours);

    printf("enter minutes");
    scanf("%d",&minutes);

    totalminutes=(60*hours)+minutes;

    printf("totalminutes%d",totalminutes);

}
