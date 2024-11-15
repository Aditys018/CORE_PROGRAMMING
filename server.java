import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;

class Server
{
    public static void main(String Arg[]) throws Exception
    {
        System.out.println("Agent_31's application is running...");

        ServerSocket ssobj = new ServerSocket(2100);
        System.out.println("Agent_31 is waiting for client at port number 2100");

        Socket sobj = ssobj.accept();
        System.out.println("Connection established with the Agent_31..");

        PrintStream ps = new PrintStream(sobj.getOutputStream());
        BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
        String str1, str2;
        System.out.println("Agent_31 Chat Massanger application started...");
        while((str1 = br1.readLine()) != null)
        {
            System.out.println("Agent_31 says : "+str1);
            System.out.println("Enter message for Agent_31 : ");
            str2 = br2.readLine();
            ps.println(str2);
        }
        System.out.println("Thank you for using the Agent_31 Chat Application..");

        sobj.close();
        ssobj.close();
    }
}