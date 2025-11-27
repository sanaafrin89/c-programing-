#include<stdio.h>
int main(){
    float ramesh_basic_salary;
    float gross_salary;
    float dearness_allowance;
    float house_rent_allowance;

    printf("enter ramesh basic salary");
    scanf("%f",&ramesh_basic_salary);

    dearness_allowance=0.40*ramesh_basic_salary;
    house_rent_allowance=0.20*ramesh_basic_salary;

    gross_salary=ramesh_basic_salary+dearness_allowance+house_rent_allowance;

    printf("gross salary of an employee %f",gross_salary);

    return 0;

}
