#include<iostream>
using namespace std;

class Test
{
    int num;

    /**
     * Datatype is Test
     * & is the address operator
     * This syntax for writing a function is used
     * for method chaining
     */
    public:
    Test & assign(int num)
    {
        // Using this operator for referring instance variable
        this->num=num;
        return *this;
    }

    void display()
    {
        cout<<"The value of the num is: "<<num<<endl;
    }
};

int main()
{
    Test n1;
    /**
     * Method chaining - they are chain function calls
     * When *this reference is returned, it can be used to
     * chain the reference calls
     */
    n1.assign(100).display();
    return 0;
}