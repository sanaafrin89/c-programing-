#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<<"Enter an alphabet: ";
    cin>>ch;

    if(ch=='a'){
         cout<<"It is a Vowel";
    }else if(ch=='e'){
         cout<<"It is a Vowel";
    }else if(ch=='i'){
         cout<<"It is a Vowel";
    }else if(ch=='o'){
         cout<<"It is a Vowel";
    }else if(ch=='u'){
         cout<<"It is a Vowel";
    }else if(ch>='a'&&ch<='z'){
         cout<<"It is a Consonant";
    }else{
        cout<<"Invalid input";
    }

}
