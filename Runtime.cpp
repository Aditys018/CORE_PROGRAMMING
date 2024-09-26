#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void Fun()    //These are called Functions
        {cout<<"Inside base Fun\n";}
        void Gun()
        {cout<<"Inside Base Gun\n";}
        void Sun()
        {cout<<"Inside Base Sun\n";}
        void Run()
        {cout<<"Inside Base Run\n";}
};

class Derived : public Base
{
    public : 
        int x,y;
        void Fun()    //These are called Functions
        {cout<<"Inside base Fun\n";}
        void Gun()
        {cout<<"Inside Base Gun\n";}
        void Sun()
        {cout<<"Inside Base Sun\n";}
        void Mun()
        {cout<<"Inside Base Mun\n";}
};

int main()  //in the main class we have 2 objects and 2 pointers
{
    
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