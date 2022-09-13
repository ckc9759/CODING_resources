import java.io.*;
public class Sample1 {
	public static void main(String args[])throws IOException{
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		System.out.println("Enter Your First Name: ");
		String name = br.readLine();
		System.out.print("Hi !!!!"+name);
	}
}
