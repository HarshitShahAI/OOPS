package com.oopsJava.Lab6;

import java.util.Scanner;

public class Question2 {

	public static void main(String[] args) {
		InvoiceTest test=new InvoiceTest();
		test.runTest();

	}

}

class Invoice{
	private String partNumber;
    private String partDescription;
    private int quantity;
    private double pricePerItem;
    
    Invoice(){
    	Scanner scn=new Scanner(System.in);
    	System.out.print("Enter the partNumber: ");
    	partNumber=scn.next();
    	System.out.print("Enter the partDescription ");
    	partDescription=scn.next();
    	System.out.print("Enter the quantity ");
        int quantity_val=scn.nextInt();
        if(quantity_val>0)
        {
        	quantity=quantity_val;
        }
        else
        {
        	quantity=0;
        }
    	System.out.print("Enter the pricePerItem: ");
    	double pricePerItem_val=scn.nextDouble();
    	if(pricePerItem_val>0)
        {
    		pricePerItem=pricePerItem_val;
        }
        else
        {
        	pricePerItem=0;
        }   
    }
    
    public void setQuantity(int quantity) {
        if (quantity > 0) {
            this.quantity = quantity;
        } else {
            this.quantity = 0; 
        }
    }
    
    public void setPricePerItem(double pricePerItem) {
        if (pricePerItem > 0.0) {
            this.pricePerItem = pricePerItem;
        } else {
            this.pricePerItem = 0.0; 
        }
    }
    
    public double getInvoiceAmount() {
        return quantity * pricePerItem;
    }

    
    public void displayInvoice() {
        System.out.println("Part Number: " + partNumber);
        System.out.println("Part Description: " + partDescription);
        System.out.println("Quantity: " + quantity);
        System.out.println("Price Per Item: $" + pricePerItem);
        System.out.println("Total Invoice Amount: $" + getInvoiceAmount());
    }
    
}

class InvoiceTest{
	
	public void runTest()
	{
		Invoice invoice = new Invoice();

        
        System.out.println("Initial Invoice Details:");
        invoice.displayInvoice();

        
        System.out.println("\nUpdating the quantity and price...");
        invoice.setQuantity(-5);  

        
        System.out.println("Updated Invoice Details:");
        invoice.displayInvoice();
	}
}

