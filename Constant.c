#include<stdio.h>

int main()
{

    int A = 10;
    const int B = 10;

    A++;
    B++;  //error is intentionally kept here to understand the concept

    return 0;
}