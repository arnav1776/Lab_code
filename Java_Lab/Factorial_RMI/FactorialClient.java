import java.rmi.*;
public class FactorialClient{
    public static void main(String args[]) throws Exception{
        FactorialInterface hello=null;
        hello=(FactorialInterface)Naming.lookup("//localhost:1091/hello");
        System.out.println("Factorial of a given number is:"+hello.calculateFactorial(5));
    }
}