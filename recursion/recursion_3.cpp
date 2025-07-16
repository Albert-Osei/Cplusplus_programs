#include <iostream>
using namespace std;

/*
This is a program of Fibonacci series.
In a Fibonacci series, each number is the sum of its two previous numbers.
*/
int fibo(int num)
{
    if(num<=1)
    {
        return num;
    }
    return fibo(num-1)+fibo(num-2);
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<fibo(i)<<" ";
    }
    return 0;
}