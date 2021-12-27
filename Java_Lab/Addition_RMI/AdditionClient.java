import java.rmi.*;
public class AdditionClient{
    public static void main(String args[]) throws Exception{
        AdditionInterface hello=null;

        hello=(AdditionInterface)Naming.lookup("//localhost:1091/Hello");
        System.out.println("Additon of Two Number is:"+hello.addTwoNumber(50,40));
    }
} 