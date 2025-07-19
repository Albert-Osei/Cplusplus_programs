#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int n;
    cout<<"Enter the value of array length : "<<endl;
    cin>>n;
    int array[n];
    cout << "Enter the value of array elements : " << endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=array[i];
    }
    cout<<"The Sum is : "<<sum;
    return 0;
}