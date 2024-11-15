#include<iostream>
using namespace std;

template<class T>
T Addition(T No1, T No2)
{
    T Ans = 0.0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    int A = 10, B = 11;
    cout<<Addition(A,B)<<"\n";

    float X = 10, Y = 11.80;
    cout<<Addition(X,Y)<<"\n";

    double C = 90.99, D = 98.3;
    cout<<Addition(A,B)<<"\n";

    return 0;
}