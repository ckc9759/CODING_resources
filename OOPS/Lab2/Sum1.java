import java.io.*;
public class Excercise1 {
	public static void main(String args[])throws IOException{
	    InputStreamReader isr = new InputStreamReader(System.in);
	    BufferedReader br = new BufferedReader(isr);
		int sum=0;
	    System.out.println("Enter Ten Numbers: ");
	    int a[]=new int[10];
	    for(int i=0;i<10;i++){
	    	String name=br.readLine();
	    	a[i]=Integer.parseInt(name);
	    	sum+=a[i];
	    }
	    System.out.println("Sum: "+sum);
	}
}
