#include<iostream>
using namespace std;

class Base
{
    public:
        void Fun()    //Definition
        {
            cout<<"Inside base Fun\n";
        }
};

class Derived : public Base
{
    public : 
        void Fun()
        {
            cout<<"Inside Derived Gun\n";
        }
};

int main()
{
    cout<<sizeof(Base)<<"\n";       //1 byte
    Derived dobj;
    dobj.Fun();

    Derived bobj;
    bobj.Fun();

    return 0;
    
}