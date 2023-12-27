public class Abstraction {
    
}

abstract class Animal{
    abstract void walk();
}

class Horse extends Animal{
    public void walk(){
        System.out.println("Walks on 4 legs");
    }
}

class chicken extends Animal{
    public void walk(){
        System.out.println("Walks on 2 legs");
    }
}

class OOPS{
    public static void main(String[] args) {
        Horse horse=new Horse();
        horse.walk();
        // Animal animal=new Animal(); // Runtime error

    }
}
