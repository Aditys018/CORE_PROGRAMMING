#include<iostream>
using namespace std;


class Marvellous
{
    public:
        int No1;
        int No2;

        Marvellous()
        {
            cout<<"Inside Constructor\n";
        }
        ~Marvellous()
        {
            cout<<"Inside Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Fun\n";
        }
};
int main()
{

    return 0;
}