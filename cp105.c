#include<stdio.h>
int main(){
    int total_sp;
    int total_cp;
    int total_profit;
    int cp_of_one_item;

    printf("total selling price of 15 item");
    scanf("%d",&total_sp);

    printf("total profit earn on them");
    scanf("%d",&total_profit);

    total_cp=total_sp-total_profit;
    cp_of_one_item=total_cp/15;

    printf("cost price of one item %d",cp_of_one_item);

    return 0;

}
