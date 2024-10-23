
import java.util.Scanner;

class ExceptionDemo2
{
    public static void main(String A[])
    {
        

        Scanner sobj = new Scanner(System.in);
        int Arr[] = {10,20,30,40,50};  //array value should not be given in Java which is allowed in c/c++
                                       //if the array contains 5 values and if you re trying to access 20th element you will get arrayindexoutofbound exception

        int index = 0;

        System.out.println("Enter the index:");
        index = sobj.nextInt();

        System.out.println("Value at the given index is: "+Arr[index]);
        
    }

}