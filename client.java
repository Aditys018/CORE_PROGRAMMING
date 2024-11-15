import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.Socket;

class Client
{
    public static void main(String Arg[]) throws Exception
    {
        System.out.println("Client application is running...");

        
        
        
        Socket sobj = new Socket("localhost",2200);
        System.out.println("Connection established with the Agent_31..");

        PrintStream ps = new PrintStream(sobj.getOutputStream());
        BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
        String str1, str2;
        System.out.println("Agent_31's Chat Massanger application started...");
        while(!(str1 = br2.readLine()).equals("end"))
        {
            ps.println(str1);
            str2 = br1.readLine();
            System.out.println("Enter the message for Agent_31 : ");
            System.out.println("Server says : "+str2);
        }
        System.out.println("Thank you for using the Agent_31's Chat Application..");

        sobj.close();
       
    }
}