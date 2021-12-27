import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;
public class LoginPage extends JFrame implements ActionListener
{
    Container c;
    Connection con=null;
    Statement stmt=null;
    ResultSet rs=null;
    JLabel lblFirstName;
    JTextField txtFirstName;
    JTextField txtLastName;
    JLabel lblLastName;
    JButton btnLogin;
    public LoginPage()
    {
        c=getContentPane();
        c.setLayout(new FlowLayout());

        lblFirstName=new JLabel("First Name");
        txtFirstName=new JTextField(20);

        lblLastName=new JLabel("Last Name");
        txtLastName=new JTextField(20);

        btnLogin=new JButton("Login");

        c.add(lblFirstName);
        c.add(txtFirstName);
        c.add(lblLastName);
        c.add(txtLastName);
        c.add(btnLogin);

        btnLogin.addActionListener(this);

    }

    public void actionPerformed(ActionEvent ae)
    {
        String FN=txtFirstName.getText();
        String LN=txtLastName.getText();
        String sqlQuery="Select *from tblregister where firstname='"+FN+"' and lastname='"+LN+"'";
        if(ae.getSource()==btnLogin)
        {
            con=DBConnection.getDatabaseConnection();
            try
            {
                stmt=con.createStatement();
                rs=stmt.executeQuery(sqlQuery);
                if(rs.next())
                {
                    Welcome ob=new Welcome();
                    ob.setTitle(FN+" Frame");
                    ob.setSize(300,300);
                    ob.setVisible(true);
                    ob.setUserName(FN);
                    ob.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
                    dispose();
                }
                else
                {
                    System.out.println("Please check user name and password...");
                }
            }
            catch(SQLException ex)
            {
                ex.printStackTrace();
            }

            finally
            {
                try
                {
                        con.close();
                }
                catch(SQLException e)
                {
                    e.printStackTrace();
                }
            }
        }
    }

    public static void main(String[] args) {
        LoginPage page=new LoginPage();
        page.setTitle("Login Page");
        page.setSize(400,400);
        page.setVisible(true);
        page.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
