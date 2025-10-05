#include<iostream>
using namespace std;

int main()
{
    int array[]={2,19,4,86,30,43};
    int *ptr;

    ptr=array;

    for(int x=0;x<6;++x)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
}