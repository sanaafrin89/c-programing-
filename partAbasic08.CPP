#include<iostream>
using namespace std;

int main(){
    int phy;
    int che;
    int maths;
    int total;
    int grade;

    cout<<"enter marks of physics";
    cin>>phy;
    cout<<"enter marks of chemistry";
    cin>>che;
    cout<<"enter marks of maths";
    cin>>maths;

    total=phy+che+maths;

    if(total>=90){
        cout<<"GRADE : A";
    }else if(total>=75){
        cout<<"GRADE : B";
    }else if(total>=60){
        cout<<"GRADE : C";
    }else if(total>=40){
        cout<<"GRADE : D";
    }else if(total>=20){
        cout<<"GRADE : E";
    }else{
        cout<<"FAIL";
    }



}
