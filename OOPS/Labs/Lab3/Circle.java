package Lab3;

public class Circle {
	static double PI; /*
					 * variables PI is a class variable, it is not instance
					 * specific
					 */
	private double radius;

	// overloaded constructor
	Circle(double radius) {
		this.radius = radius;
		Circle.PI = 3.141;
	}

	// accessor method
	public double getRadius() {
		return radius;
	}

	// mutator method
	public void setRadius(double radius) {
		this.radius = radius;
	}

	// method to find the area
	public double area() {
		return (PI * radius * radius);
	}

	// static method's are not instance specific
	public static void getCircumference(double radius) {
		// here radius variable is a local variable
		System.out.println("Circumference = " + 2 * PI * radius);
	}
}// End of circle

