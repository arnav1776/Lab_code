import java.net.*;
import java.io.*;
class ClientDemo{
    public static void main(String args[]) throws IOException{
        //Step 1: create a Socket at client side using the Socket class
        Socket s=new Socket("localhost",777);
        //Step 2: Add an Input Stream to the socket sothat it can read the data 
        //from the server
        InputStream obj=s.getInputStream();
        //Step 3:Buffer the data from server using BufferedReader
        BufferedReader br=new BufferedReader(new InputStreamReader(obj));
        String str=br.readLine();
            System.out.println("Message from the Server:"+str);
        //Step 4: close Buffered Reader and client Socket Connection.
        br.close();
        s.close();
    }
}