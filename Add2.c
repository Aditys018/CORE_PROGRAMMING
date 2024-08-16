#include<stdio.h>

int main()
{

    int no1 = 0;    //4byte
    int no2 = 0;    //4byte
    int Ans = 0;    //4byte   hence it will allocate 12 byte memory 

    printf("Enter first number: \n");
    scanf("%d", &no1);

    printf("Enter second number: \n");
    scanf("%d" , &no2);


    int Ans = no1 + no2;

    printf("Addition is: %d\n" , Ans);


    return 0;
}