#include <iostream>
using namespace std;

class Num2;     //(in friend class) do a forward declaration of the class

class Num1
{
    private:
    int n1;

    friend class Num2;      //declare friend class

    public:
    Num1()      //constructor of class Num1
    {
        n1=11;
    }
};

class Num2
{
    private:
    int n2;

    public:
    Num2()      //constructor of class Num2
    {
        n2=65;
    }

    int avg()   //function to calculate average
    {
        Num1 obj1;
        return (obj1.n1+n2)/2;
    }
};

int main()
{
    Num2 obj2;
    cout<<"The Average is : "<<obj2.avg();
    return 0;
}