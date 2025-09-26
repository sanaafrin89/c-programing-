#include<stdio.h>
int main (){
    int a1,a2,a3,a4,a5;
    int agg;
    float perst;
        printf("enter marks of 5 subject");
        scanf("%d,%d,%d",&a1,&a2,&a3,&a4,&a5);

        agg=a1+a2+a3+a4+a5;
        perst=(agg/500.0*100);

        printf("agg marks=%d",agg);
        printf("perst=%f",perst);

}
