#include <iostream>
using namespace std;

int sum(int num)
{
    if(num!=0) // base case
    {
        return num+sum(num-1); // recursive case
    }
    return 0;
}

int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"Sum is: "<<sum(num)<<endl;
    return 0;
}