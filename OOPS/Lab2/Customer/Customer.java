package lab2;

public class Customer {
	private String CustomerName;
	private String CustomeridNo;
	private double CustomerBalance;
	private Item PurchasedItem = new Item("Good day","1234",3,50.0);

	public String getCustomerName() {
		return CustomerName;
	}

	public void setCustomerName(String CustomerName) {
		this.CustomerName = CustomerName;
	}

	public Customer(String name, String id, double balance) {
		CustomerName = name;
		CustomeridNo = id;
		CustomerBalance = balance;
	}

	public Customer(String name, String id){
		CustomerName = name;
		CustomeridNo = id;
		CustomerBalance = 5000;
	}
	
	public void print(){
		System.out.println("Item Name: "+PurchasedItem.toString());
	}
	
	public void buyItem(Item item){
		
	}
}
