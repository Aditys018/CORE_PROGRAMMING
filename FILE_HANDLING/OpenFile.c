#include<stdio.h>
#include<io.h>
#include<fcntl.h>


int main()
{
    char FileName[20];
    int FD = 0;
    printf("Enter the filename that you want to open");
    scanf("%s" , FileName);

    FD = open(FileName, O_RDWR);
    if(FD == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File is successfully opened with FD: %d\n", FD);
    }

    close(FD);      //to close the file

    return 0;
}

// read mode           O_RDONLY
// write mode          O_WRONLY
//read + write mode    O_RDWR