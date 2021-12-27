import java.net.*;
import java.io.*;
public class TCPClient{
    public static void main(String args[]) throws Exception{
        Socket s=new Socket("localhost",888);
        BufferedReader brReadServer=new BufferedReader(new InputStreamReader(s.getInputStream()));

        BufferedReader brReadKB=new BufferedReader(new InputStreamReader(System.in));

        PrintStream ps=new PrintStream(s.getOutputStream());

        String str1,str2;
        while(!(str1=brReadKB.readLine()).equals("exit")){
            ps.println(str1+"\n");
            str2=brReadServer.readLine();
            System.out.println(str2);
        }
        brReadKB.close();
        brReadServer.close();
        s.close();
    }
}