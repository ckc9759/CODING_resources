package lab2;

public class Item {
	private String itemName;
	private String itemidNo;
	private int itemQuantity;
	private double itemPrice;

	public String getItemName() {
		return itemName;
	}

	public void setItemName(String itemName) {
		this.itemName = itemName;
	}

	public Item(String a, String b, int c, double d) {
		itemName = a;
		itemidNo = b;
		itemQuantity = c;
		itemPrice = d;
	}

	public Item(String a, String b, int c) {
		itemName = a;
		itemidNo = b;
		itemQuantity = c;
		itemPrice = 500;
	}

	public Item(String a, String b) {
		itemName = a;
		itemidNo = b;
		itemQuantity = 1;
		itemPrice = 500;
	}
}
