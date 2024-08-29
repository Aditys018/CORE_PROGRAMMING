#include<stdio.h>


struct Demo
{
     int no;
     float f;
};

struct PPA
{
    int x;
    struct Demo dobj;
    int Y;
};

int main()
{
   struct PPA obj;

    return 0;
}