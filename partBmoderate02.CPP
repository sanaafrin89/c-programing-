#include<iostream>
using namespace std;

int main(){
    int year;
    int leap_year;

    cout<<"enter year";
    cin>>year;

     if(year%4==0){
        cout<<"leap year";
    }else if(year%100==0){
        cout<<"leap year";
    }else if(year%400==0){
        cout<<"leap year";
    }else{
        cout<<"not a leap year";
    }

}
