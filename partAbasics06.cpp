#include<iostream>
using namespace std;

int main(){
    char vo;

    cout<<"enter alphabet";
    cin>>vo;

     if(vo=='a'||vo=='e'||vo=='i'||vo=='o'||vo=='u'||
       vo=='A'||vo=='E'||vo=='I'||vo=='O'||vo=='U'){
        cout << "Vowel";
       }else{
           cout<<"Consonant";

       }
       return 0;
}
