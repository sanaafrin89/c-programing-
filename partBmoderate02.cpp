#include<iostream>
using namespace std;
int main() {
    int a,b,c;

    cout<<"enter three number";
    cin >> a >> b >> c;

    if(a>b){
        if(a>c){
            cout<<"largest is :"<<a;
       }else{
            cout<<"largest is :"<<c;
       }
    if(b>c){
            cout<<"largest is :"<<b;
       }else{
            cout<<"largest is :"<<c;
    }
       }

    return 0;
}
