#include<stdio.h>

//initialization inside struct in not allowed because there's no memory allocation.
struct Demo
{
    int no = 11;
    float f = 90.99;
    double d = 90.9999;
    int i = 67;
};

int main()
{
   struct Demo obj;
  

  

    return 0;
}