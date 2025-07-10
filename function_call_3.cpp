#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a+b;
    return c;
}

int main()
{
    int c;
    c = sum(5,9);
    cout<<"The result is: "<<c<<endl;
}