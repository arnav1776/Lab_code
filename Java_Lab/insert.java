import java.sql.*;

public class insert{
public static void main(String args[]){
try{
Class.forName("com.mysql.cj.jdbc.Driver");
Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/pce", "root", "root");
Statement st = con.createStatement();
st.executeUpdate("insert into students values(5,'Rajiv','Jaipur')");
con.close();
}catch(Exception e){
System.out.println(e.getMessage());
}
}
}
			
