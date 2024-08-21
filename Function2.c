#include<stdio.h>


// Function Definition

int Addition(int Value1, int Value2)
{
    int Result = 0;         //Local Variable

    Result = Value1 + Value2;
    return Result;

}

int main()                              //Entrypoint function
{
    int No1=0 , No2 = 0 , Ans = 0;      //Local Variables

    printf("Enter number1 : \n");
    scanf("%d" , &No1);

    printf("Enter number2 : \n");
    scanf("%d" , &No2);


    Ans =  Addition(No1, No2);             //Function call

    printf("Addition is: %d\n" , Ans);


    return 0;

}