#include<iostream>
using namespace std;

// Implementing Bubble sort
int main()
{
    int i;
    int j;
    int temp;

    int arr[8]={12,3,1,5,6,27,9,18};
    cout<<"Unsorted array:\n";
    for(i=0;i<8;++i)
    {
        cout<<arr[i]<<"\t";
    }

    // Bubble sort logic
    for(i=0;i<8;++i)
    {
        for(j=i+1;j<8;++j)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }

    cout<<"\nSorted array is: \n";
    for(i=0;i<8;++i)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}