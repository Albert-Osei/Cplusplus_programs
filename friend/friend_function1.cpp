#include <iostream>
using namespace std;

class Salary
{
    private: // access modifier
    int sal;

    // declare friend function
    friend int increment(Salary s);
};

// define friend function
int increment(Salary s)
{
    s.sal=0;
    s.sal += 7000;
    return s.sal;
}

int main()
{
    Salary s;
    cout<<"Increment is : ";
    cout<<increment(s);
    return 0;
}