#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    cout<<"enter first digit";
    cin>>a;
    cout<<"enter second digit";
    cin>>b;

    c=a^+2*a*b+b^2;

    cout<<"(a+b)^2=a^+2*a*b+b^2;   : "<<c;


}
