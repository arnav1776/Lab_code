import java.rmi.Naming;
import java.rmi.registry.LocateRegistry;
public class AdditionServer{
    public static void main(String args[]) throws Exception{
        Addition Hello=new Addition();
        LocateRegistry.createRegistry(1091);
        System.out.println("Registry is started on port 1091..");
        Naming.bind("//localhost:1091/Hello",Hello);
        System.out.println("Addition Server is ready....");
    }
}