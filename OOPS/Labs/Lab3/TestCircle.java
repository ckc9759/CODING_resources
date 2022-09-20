package Lab3;

class TestCircle {
	public static void main(String args[]) {
		Circle c1 = new Circle(2.3);
		c1.area();
		// accessing static method with class name
		c1.getCircumference(2.3);

		Circle c2 = new Circle(3.45);
		c2.area();
		// accessing static method with references is discouraged
		c2.getCircumference(3.45);

		/*
		 * 1. Make the area function as static and observe the output (Done) ( Gave error coz we were trying to access non static radius inside a static function area)
		 * 
		 * 2. Remove the formal argument from getCircumference() method and observe the output (Done) (Same reason, trying to access non static radius inside a static function, it worked earlier as we were passing the radius as an argument)
		 * 		 
		 * 3. Rename static to final and observe the error(s) (Cannot make a static reference to the non-static method getCircumference(double) from the type Circle)
		 * 
		 * We access it using the object created.
		 * 
		 * and correct them
		 */
	} // end of main
} // end of class
