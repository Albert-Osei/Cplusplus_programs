#include<iostream>
using namespace std;

int n;

int& cashin()
{
    /**
     * This function was created to contain
     * a reference variable. The variable can
     * only be a global one
     */
    return n;
}

int main()
{
    // Assign value to the reference variable
    cashin()=22;
    cout<<n;
    return 0;
}