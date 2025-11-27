#include<stdio.h>
int main(){
    int a,b,c,d,e;
    int aggregate;
    float percentage;

    printf("marks obtained in five subject");
    scanf("%d,%d,%d,%d,%d,&a,&b,&c,&d,&e");

    aggregate=a+b+c+d+e;
    percentage=(aggregate/500)*500;

    printf("aggregate %.2d\n",aggregate);
    printf("percetage %.2f\n",percentage);

    return 0;

}
