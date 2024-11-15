#include<stdio.h>
#include<io.h>
#include<fcntl.h>


int main()
{
    char FileName[20];
    int FD = 0;
    printf("Enter the filename that you want to open");
    scanf("%s" , FileName);

   unlink(FileName);

    return 0;
}

