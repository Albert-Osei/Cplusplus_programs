#include <iostream>
using namespace std;

int fact(int number)
{
    if(number<1)
    {
        return 1;
    }
    return number*fact(number-1);
}

int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<"The factorial of the number you have entered is : "<<fact(number)<<endl;
    return 0;
}