#include<stdio.h>
int main(){
    int hours;
    int minutes;
    int total_minutes;

    printf("enter hours");
    scanf("%d",&hours);

    printf("enter minutes");
    scanf("%d",&minutes);

    total_minutes=(hours*60)+minutes;

    printf("total_minutes=%d", total_minutes);

    return 0;

}
