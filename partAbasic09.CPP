#include<iostream>
using namespace std;

int main(){
    int a;

    cout<<"enter a number";
    cin>>a;

    if(a>0){
        cout<<"positive number";
    }else if(a<0){
        cout<<"negative number";
    }else if(a==0){
        cout<<"zero";
    }else {
        cout<<"invaild input";
    }

}
