package Lab3;

class MyStatic {
    int a; //initialized to zero
    static int b; /*initialized to zero only when class is loaded not for each object created.*/
    //Constructor incrementing static variable b 5.
    MyStatic (){ b++; }
    public void showData(){
      System.out.println("Value of a = "+a);
      System.out.println("Value of b = "+b);
      }
    //public static void increment(){
    //a++;
    //}
}

