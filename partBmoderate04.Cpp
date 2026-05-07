#include<iostream>
#include<stdlib>

using namespace std;

int main() {
    int *a, *b, *c;

    a = (int*) malloc(sizeof(int));
    b = (int*) malloc(sizeof(int));
    c = (int*) malloc(sizeof(int));

    cout << "Enter first number: ";
    cin >> *a;

    cout << "Enter second number: ";
    cin >> *b;


    *c = *a + *b;

    cout << "Sum stored in third variable: " << *c;

    return 0;
}
