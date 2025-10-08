#include<iostream>
using namespace std;

int num;
int& n1=num;
int& n2=num;

/**
 * A reference cannot be assigned to two different variables.
 * However, a variable can have two different references.
 */

 int main()
 {
    cout<<"Enter value of num: ";
    cin>>num;
    cout<<"Value of n1 is: "<<num<<endl;
    cout<<"Value of n2 is: "<<num<<endl;
    return 0;
 }