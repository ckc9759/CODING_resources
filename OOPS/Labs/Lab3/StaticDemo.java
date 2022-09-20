package Lab3;

class StaticDemo{
	   public static void main(String args[]){
	   MyStatic s1 = new MyStatic ();
	   s1.showData();
	   MyStatic s2 = new MyStatic ();
	   s2.showData();
	   MyStatic.b++;
	   s1.showData();
	 }
}
