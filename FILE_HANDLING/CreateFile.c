#include<stdio.h>
#include<io.h>
// #include<fcntl.h>  = used in linux and mac to handle all file  errors

int main()
{
    char FileName[20];
    int FD = 0;     //FD is called as file descriptor , u can use any name here

    printf("Enter the filename that you want to create");
    scanf("%s" , FileName);

    FD = creat(FileName, 0777);
    if(FD == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File is successfully created with FD: %d\n", FD);
    }

    return 0;
}