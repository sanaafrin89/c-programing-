#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;

    cout<<"enter 1st number";
    cin>>num1;
    cout<<"enter 2nd number";
    cin>>num2;

    if(num2<num1){
        cout<<"greatest number is :"<<num1;
    }else if (num1<num2){
        cout<<"greatest number is :"<<num2;
    }

}
