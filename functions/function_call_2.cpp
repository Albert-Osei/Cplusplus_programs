#include <iostream>
using namespace std;

/*
Implementation of function call by reference:
In this, the address of variables are passed to the function,
hence any change inside the function is reflected outside.

Successful Test Case:
After running program, the values of variables m and n
should be changed or swapped
*/
void swap(int &x, int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int m=250;
    int n=300;
    swap(m,n);
    cout<<"m's value is: "<<m<<endl;
    cout<<"n's value is: "<<n<<endl;
    return 0;
}