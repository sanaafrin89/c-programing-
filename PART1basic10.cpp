#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int add;
    int sub;
    int multi;
    int div;

    cout<<"enter first number ";
    cin>>num1;
    cout<<"enter second number ";
    cin>>num2;

    add=num1+num2;
    sub=num1-num2;
    multi=num1*num2;
    div=num1/num2;

    cout<<"addition :"<<add<<"\n";
    cout<<"subtraction :"<<sub<<"\n";
    cout<<"multiplication :"<<multi<<"\n";
    cout<<"division :"<<div;

}
