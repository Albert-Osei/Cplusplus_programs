#include <iostream>
using namespace std;

int main()
{
    int array3D[3][3]={{2,5,12},{7,1,90},{9,18,4}};
    for(int i=0;i<3;i++)        //use a nested for loop
    {
        for(int j=0;j<3;j++)
        {
            cout<<array3D[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}