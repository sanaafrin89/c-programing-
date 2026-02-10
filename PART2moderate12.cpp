#include<iostream>
using namespace std;

int main(){
    float r;
    float pie=3.14;
    float area;
    float circum;

    cout<<"enter radius :";
    cin>>r;

    area=pie*r*r;
    circum=2*pie*r;

    cout<<"area of a circle :"<<area<<"\n";
    cout<<"circumference of a circle :"<<circum;

}
