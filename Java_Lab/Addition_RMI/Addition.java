import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
public class Addition extends UnicastRemoteObject implements AdditionInterface{
    public Addition() throws RemoteException{

    }
    public int addTwoNumber(int a,int b){
        return a+b;
    }
}