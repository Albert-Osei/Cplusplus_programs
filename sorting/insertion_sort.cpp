#include<iostream>
using namespace std;

// Implementation of insertion sort
int main()
{
    int i;
    int j;
    int temp;
    int num;
    int arr[30];
    cout<<"Enter the number of elements of the array: ";
    cin>>num;

    cout<<"Enter the elements: \n";
    for(i=0;i<num;++i)
    {
        cin>>arr[i];
    }

    for(i=1;i<=num-1;++i)
    {
        temp=arr[i];
        j=i-1;

        while((temp<arr[j]) && (j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }

    cout << "Sorted elements: ";
    for (i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}