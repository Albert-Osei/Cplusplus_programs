#include<iostream>
using namespace std;

// Implementation of selection sort
int main()
{
    int i;
    int j;
    int num;
    int p;
    int temp;
    int min;
    int arr[10];
    cout<<"Enter the number of elements: ";
    cin>>num;

    cout<<"\nEnter the elements: \n";
    for(i=0;i<num;++i)
    {
        cin>>arr[i];
    }

    for(i=0;i<num-1;++i)
    {
        min=arr[i];
        p=i;
        for(j=i+1;j<num;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                p=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[p];
        arr[p]=temp;
    }
    cout << "\nSorted elements: \n";
    for (i = 0; i < num; ++i)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}