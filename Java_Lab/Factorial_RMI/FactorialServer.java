import java.rmi.registry.LocateRegistry;
import java.rmi.Naming;
public class FactorialServer{
    public static void main(String args[]) throws Exception{
        Factorial ob=new Factorial();
        LocateRegistry.createRegistry(1091);
        System.out.println("Registry is created on port 1091");
        Naming.bind("//localhost:1091/hello",ob);
        System.out.println("Addition Server is ready and waiting for the client ");
    }
}