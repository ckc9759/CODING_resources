class Pen{
    String color;
    String type;
    
    public void write(){
        System.out.println("Writing something");
    }
    
    public void printColor(){
        System.out.println(this.color); // This keyword is used to tell the method which object is being invoked
    }
}

public class OOPS{
    public static void main(String args[]){
        Pen pen1=new Pen();
        pen1.color="blue";
        pen1.type="gel";
        pen1.write();
        
        Pen pen2=new Pen();
        pen2.color="black";
        pen2.type="ball";
        
        pen1.printColor();
        pen2.printColor();
    }
}
