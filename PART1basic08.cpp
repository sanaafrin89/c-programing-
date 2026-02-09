#include<iostream>
using namespace std;

int main(){
    int p;
    int r;
    int t;
    int SI;

    cout<<"enter time";
    cin>>t;
    cout<<"enter rate";
    cin>>r;
    cout<<"enter principal";
    cin>>p;

    SI=p*r*t/100;

    cout<<"simple interest ;"<<SI;

}
