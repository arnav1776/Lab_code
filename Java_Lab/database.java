import java.sql.*;  
public class database{  
public static void main(String args[]){  
try{  
Class.forName("com.mysql.cj.jdbc.Driver");  
Connection con=DriverManager.getConnection(  
"jdbc:mysql://localhost:3306/pce","root","root");  

Statement st=con.createStatement();  
ResultSet rs=st.executeQuery("select * from table1");  
while(rs.next())  
System.out.println(rs.getInt(1)+"  "+rs.getString(2)+"  "+rs.getString(3));  
con.close();  
}catch(Exception e){ System.out.println(e);
 System.out.println(e.getMessage());
}  
}  
}  

//show database;
//create database pce;
//create table table1(
//		name varchar(10),
//		age int(2),
//		city varchar(20));
//
//insert into table1 values("",21,"");
//select * from table1;