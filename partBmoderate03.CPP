#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int num3;

    cout<<"enter 1st number";
    cin>>num1;
    cout<<"enter 2nd number";
    cin>>num2;
    cout<<"enter 3rd number";
    cin>>num3;

    if(num2<num1 && num3<num1){
        cout<<"largest number is :"<<num1;
    if(num1<num2 && num3<num2){
        cout<<"largest number is :"<<num2;
    if(num1<num3 && num2<num3){
        cout<<"largest number is :"<<num3;
    }else{
        cout<<"all are same";
    }
    }
    }

}
