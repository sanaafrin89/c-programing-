#include<iostream>
using namespace std;
int main (){
    int a;
    int b;

    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"value of first number"<<a<<"\n";
    cout<<"value of second number"<<b ;



}
