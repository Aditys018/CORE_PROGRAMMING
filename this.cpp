#include<iostream>
using namespace std;

class Demo
{
    public:
    int No1, No2;

    Demo(int A, int B)
    {
        No1 = A;
        No2 = B;
    }
    void Display(int X) // display naavachi method, 
    {
        cout<<"Value of No1 : "<<this->No1<<"\n";
        cout<<"Value of No2 : "<<this->No2<<"\n";
        cout<<"value of X : "<<X<<"\n";
    }

};
int main()
{
    Demo obj(11,21);
    obj.Display(51);

    return 0;

}