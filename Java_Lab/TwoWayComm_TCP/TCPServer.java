import java.net.*;
import java.io.*;
public class TCPServer{
    public static void main(String args[]) throws Exception{
        ServerSocket ss=new ServerSocket(888);
        Socket s=ss.accept();
        BufferedReader brReadClient=new BufferedReader(new InputStreamReader(s.getInputStream()));
        BufferedReader brReadKB=new BufferedReader(new InputStreamReader(System.in));
        PrintStream ps=new PrintStream(s.getOutputStream());

        while(true){
            String str1,str2;
            while((str1=brReadClient.readLine())!=null){
                System.out.println(str1);
                str2=brReadKB.readLine();
                ps.println(str2);
            }
            ps.close();
            brReadClient.close();
            brReadKB.close();
            s.close();
            ss.close();
        }
    }
}