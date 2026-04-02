#include<iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;

    cout<<"enter three number";
    cin >> a >> b >> c;

    if(a>b && a>c){
        cout<<"largest is :"<<a;
    }else if(b>a && b>c){
        cout<<"largest is :"<<b;
    }else if(c>a && c>b){
        cout<<"largest is :"<<c;
    }else{
        cout<<"all are same";

    }

    return 0;
}
