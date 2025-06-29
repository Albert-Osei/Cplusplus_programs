#include <iostream>
using namespace std;

int main()
{
    int n=100;
    while(n>=90)
    {
        if(n==96)
        {
            /*use continue statement to skip current iteration*/
            n--;
            continue;
        }
        cout<<"the value is: "<<n<<endl;
        n--;
    }
    return 0;
}