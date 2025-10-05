#include<iostream>
using namespace std;

int main()
{
    // Declare variables and pointers
    int val1, val2;
    int *ptr1, *ptr2;
    int sum, sub;

    // Assign variables to pointers
    ptr1=&val1;
    ptr2=&val2;

    // Assign values to variables
    cout<<"Enter values"<<endl;
    cin>>val1;
    cin>>val2;

    // Increment of variables
    val1++;
    val2++;

    // Print out variables
    cout<<"After increment val1 is: "<<*ptr1<<" and val2 is: "<<*ptr2<<endl;

    // Summation
    sum=*ptr1+*ptr2;
    cout<<"Sum: "<<sum<<endl;

    // Decrement of variables
    val1--;
    val2--;

    // Print out variables
    cout<<"After decrement val1 is: "<<*ptr1<<" and val2 is: "<<*ptr2<<endl;

    // Subtraction
    sub=*ptr1-*ptr2;
    cout<<"Subtraction: "<<sub<<endl;

    return 0;
}