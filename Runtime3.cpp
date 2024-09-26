#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;    //1000
        virtual void Fun()    //These are called Functions
        {cout<<"Inside Base Fun\n";}
        void Gun()  //2000
        {cout<<"Inside Base Gun\n";}
        virtual void Sun()  //3000
        {cout<<"Inside Base Sun\n";}
        virtual void Run()  //4000
        {cout<<"Inside Base Run\n";}
};

class Derived : public Base
{
    public : 
        int x,y;
        virtual void Fun()  //5000  //These are called Functions
        {cout<<"Inside Derived Fun\n";}
        void Gun()  //6000
        {cout<<"Inside Derived Gun\n";}
        virtual void Mun()  //7000
        {cout<<"Inside Derived Mun\n";}
        void Run()  //8000
        {cout<<"Inside Derived Run\n";}
};

int main()  //in the main class we have 2 objects and 2 pointers
{
    cout<<"Size of base class : "<<sizeof(Base)<<"\n";
    cout<<"Size of derived class : "<<sizeof(Derived)<<"\n";


    Derived dobj;   //object
    Base *bptr = NULL;  //pointer
   
    bptr = &dobj;   //upcasting

    bptr->Fun();    //base fun
    bptr->Gun();    //base gun 
    bptr->Sun();    //base sun
    bptr->Run();    //base run
    // bptr->Mun();    //error

   
    return 0;
    
}