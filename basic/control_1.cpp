#include <iostream>
using namespace std;

int main()
{
    int n=100;
    while(n <= 200)
    {
        cout<<"the value is: "<<n<<endl;
        if(n==140)
        {
            break;
        }
        n=n+10;
    }
    cout<<"out of the loop";
    return 0;
}