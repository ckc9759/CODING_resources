public class Inheritance {
    // Code reusability
}

class Shape{
    String color; 
    // Parent class

    public void area(){
        System.out.println("Display area");
    }
}

class Triangle extends Shape{
    // Child class
    public void area(int l, int h){
        System.out.println(1/2*l*h);
    }
}

class equilateralTriangle extends Triangle{
    public void area(int l, int h){
        System.out.println(1/2*l*h);
    }
}

class circle extends Shape{
    public void area(float r){
        System.out.println(3.14*r*r);
    }
}


class OOPS{
    public static void main(String[] args) {
        Triangle t1=new Triangle();
        t1.color="red";
    }
}

// Single level inheritance
// Multi level inheritance
// Heirarchical inheritance -> Multiple derived class from one base class
// Hybrid inheritance -> all mixed
// Mixed inheritance
