#include<iostream>
using namespace std;

int main(){
    int phy;
    int che;
    int maths;
    int total;
    int percent;

    cout<<"enter marks of physics";
    cin>>phy;
    cout<<"enter marks of chemistry";
    cin>>che;
    cout<<"enter marks of maths";
    cin>>maths;

    total=phy+che+maths;
    percent=total*300/100;

    cout<<"total marks :"<<total<<"\n";
    cout<<"pertcentage :"<<percent<<"%";

}
