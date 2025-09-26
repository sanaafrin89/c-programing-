#include<stdio.h>
int main (){
    float total_sp,total_profit,total_cp,cp_of_one_item;
    printf("enter total_sp of 15 items");
    scanf("%f",&total_sp);

    printf("enter total_profit earned:");
    scanf("%f",&total_profit);

    total_cp=total_sp-total_profit;
    cp_of_one_item=total_cp/15.0;

    printf("cp_of_one_item=%f",cp_of_one_item);

}
