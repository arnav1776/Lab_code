import javax.swing.*;
import java.awt.*;
public class Welcome extends JFrame
{
    Container c;
    JLabel lblUserName;
    public Welcome()
    {
        c=getContentPane();
        c.setLayout(new FlowLayout());
        lblUserName=new JLabel();
        c.add(lblUserName);
    }

    public void setUserName(String userName)
    {
        lblUserName.setText("Welcome "+userName);
    }
}