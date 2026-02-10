#include<iostream>
using namespace std;
int main (){
    int con1;
    int con2;
    int con3;

    cout<<"enter first number";
    cin>>con1;
    cout<<"enter second number";
    cin>>con2;

    con3=con2;
    con2=con1;
    con1=con3;

    cout<<"value of first number"<<con1<<"\n";
    cout<<"value of second number"<<con2;


}
