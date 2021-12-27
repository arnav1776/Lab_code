import java.rmi.Remote;
import java.rmi.RemoteException;
public interface AdditionInterface extends Remote{
    public int addTwoNumber(int a,int b) throws RemoteException;
}