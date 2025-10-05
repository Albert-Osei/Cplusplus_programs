#include<iostream>
using namespace std;

class King
{
    public:
    void call();
    /**
     * Using this pointer for referring to
     * a member function of current class
     */
    void Text()
    {
        cout<<"Hello Brother!"<<endl;
        this->call();
    }
};

/**
 * Scope resolution operator
 * Means the call() belongs to King class
 */
void King :: call()
{
    cout<<"A"<<endl;
    cout<<"B"<<endl;
    cout<<"C"<<endl;
}

int main()
{
    King obj;
    obj.Text();
    return 0;
}