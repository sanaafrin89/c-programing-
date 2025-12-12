#include<stdio.h>
int main(){
    int a[3][4]={{5,2,4,1},{2,1,6,3},{9,5,2,6}};
    int i;
    int j;

    for(i=0; i<3; i=i+1){
    for (j=0; j<4; j=j+1);
        printf("%d", a[i][j]);
    }
}
