#include <iostream>
using namespace std;

/*
Implementation of function call by value:
In this, copies of the original values of variables are passed directly to
a function and changes made to them in the function do not affect
the arguments

Successful Test Case:
After running program, there should be no change
in the values of variables x and y.
*/
void swapit(int, int)
{
    int x;
    int y;
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 120;
    int y = 150;
    swapit(x, y);
    cout<<"the value of x is: "<<x<<endl;
    cout<<"the value of y is: "<<y<<endl;
    return 0;
}