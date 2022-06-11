import java.sql.*;

class JDBCTest
{
	public static void main(String args[])
	{
		Connection con = null;
		try
		{
			Class.forName("com.mysql.jdbc.Driver");
			
			System.out.println("Sab First Class");
		}
		catch (Exception e)
		{
			System.out.println(e);
		}
		
		try
		{
			con = DriverManager.getConnection("jdbc:mysql://localhost:3306/cse1?autoReconnect=true&useSSL=false","root","gehu");
			System.out.println("Connection Baith Gya");
		}
		catch(Exception e)
		{
			System.out.println("Connection Nhi Baitha");
		}
		
		try
		{
			Statement st = con.createStatement();
			st.executeUpdate("insert into emp (id,name)values(10,'Moosewala')");
		}
		catch(Exception e)
		{
			System.out.println("dikkat hai");
		}
	}																			
}
