package Lab3;

public class ConstructorBlockExample{

	{ System.out.println("This is first constructor block"); }

	public ConstructorBlockExample(){
		System.out.println("This is no parameter constructor");
	}

	public ConstructorBlockExample(String param1){
        System.out.println("This is single parameter constructor"); 
    }

	{System.out.println("This is second constructor block");}

	public static void main(String[] args){

		ConstructorBlockExample constrBlockEx = new ConstructorBlockExample();
        ConstructorBlockExample constrBlockEx1 = new ConstructorBlockExample("param1"); 
    }
}

