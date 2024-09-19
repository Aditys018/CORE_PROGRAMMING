#include<iostream>
using namespace std;

class Base
{
    public:
    int i;

    private:
    int j;

    protected:
    int k;

    public:
    Base()
    {
        i = 10;
        j = 20;
        k = 30;
    }
    void gun()
    {
        cout<<i<<"\n";  // All 3 allowed coz it is in the same parent class
        cout<<j<<"\n";  
        cout<<k<<"\n";
    }

};

class Derived : public Base
{
    public:
    void fun()
    {
        cout<<i<<"\n";  //Allowed
        cout<<j<<"\n";  //not allowed
        cout<<k<<"\n";  //Allowed
    }
};

int main()
{
    Base dobj;

    cout<<bobj.i<<"\n"; //allowed
    cout<<bobj.j<<"\n"; //not allowed
    cout<<bobj.k<<"\n"; //not allowed
    



    return 0;
}