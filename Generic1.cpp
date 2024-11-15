#include<iostream>
using namespace std;


double Addition(int No1, int No2)
{
    double Ans = 0.0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    int A = 10, B =11;
    cout<<Addition(A,B)<<"\n";

    return 0;
}