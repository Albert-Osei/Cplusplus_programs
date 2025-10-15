#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int *ptr;

    /**
     * Allocating memory dynamically
     * for an array
     */
    ptr = new int[size];

    cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;++i)
    {
        cout<<"Element: ";
        cin>>ptr[i];
    }

    cout<<"\nElements you have entered: "<<endl;
    for(int i=0;i<size;++i)
    {
        cout<<"Element: "<<ptr[i]<<endl;
    }

    // Deallocation of memory
    delete [] ptr;
}