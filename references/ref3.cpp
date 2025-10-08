#include<iostream>
using namespace std;

// Pass the references as the parameters
void swap(int& n1, int& n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;
}

int main()
{
    int x=34;
    int y=90;

    cout<<"Before swaping the value of x is: "<<x<<endl;
    cout<<"Before swaping the value of y is: "<<y<<endl;

    swap(x,y);

    cout << "After swaping the value of x is: " << x << endl;
    cout << "After swaping the value of y is: " << y << endl;
}