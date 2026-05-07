#include<stdio.h>
int main(){
    int year;
    int leap_year;

    printf("enter year");
    scanf("%d",&year);

    if(year%4==0){
        printf("leap_year");
    }else if(year%100==0){
       printf("leap_year");
    }else if(year%400==0){
       printf("leap_year");
    }else{
        printf("not a leap_year");
    }


}
