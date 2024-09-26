#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void Fun()    //ReDefinition
        {
            cout<<"Inside base Fun\n";
        }
};

class Derived : public Base
{
    public : 
        int x,y;
        void Fun()
        {
            cout<<"Inside Derived Gun\n";
        }
};

int main()  //in the main class we have 2 objects and 2 pointers
{
    Base bobj;  //Object
    Derived dobj;   //object

    Base *bptr = NULL;  //pointer
    Derived *dptr = NULL;   //pointer
    

    bptr = &bobj;   //Nocasting
    dptr = &dobj;   //Nocasting

    bptr = &dobj;   //upcasting

    dptr = &bobj;   //technically, concept of downcasting is not allowed it generates an error
    

    return 0;
    
}