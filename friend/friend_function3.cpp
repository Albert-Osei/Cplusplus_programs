#include <iostream>
using namespace std;

/*
Implementing a friend function as a friend to two classes
*/

class B;    //forward declaration of class B to implement friend class

class A
{
    int x;
    public:
    void assign(int i)
    {
        x=i;
    }
    friend void product(A,B);
};

class B
{
    int y;
    public:
    void assign(int i)
    {
        y=i;
    }
    friend void product(A,B);
};

void product(A a, B b)
{
    cout<<a.x*b.y;
};

int main()
{
    A a;
    B b;
    a.assign(45);
    b.assign(20);
    product(a,b);

    return 0;
}