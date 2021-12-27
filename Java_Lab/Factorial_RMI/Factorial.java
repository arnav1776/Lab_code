import java.rmi.server.UnicastRemoteObject;
import java.rmi.RemoteException;
public class Factorial extends UnicastRemoteObject implements FactorialInterface{
    public Factorial() throws RemoteException{

    }

    public int calculateFactorial(int n){
        if(n==0 || n==1)
            return 1;
        else
            return n*calculateFactorial(n-1);
    }
}