#include<stdio.h>
#include<io.h>
#include<fcntl.h>


int main()
{
    char FileName[20];
    int FD = 0;
    char Data[100] ={'\0'};

    printf("Enter the filename that you want to open");
    scanf("%s" , FileName);

    FD = open(FileName, O_RDWR);        //to open the file
    if(FD == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with FD: %d\n", FD);
    }

    read(FD,Data , 10);
    printf("Data from file is: %s\n" , Data);

    close(FD);      //to close the file

    return 0;
}

// read mode           O_RDONLY
// write mode          O_WRONLY
//read + write mode    O_RDWR