package com.oopsJava.Lab6;

import java.util.Scanner;

public class Question4 {

    public static void main(String[] args) {
        DateTest test = new DateTest();
        test.runTest();
    }

}

class Date {
    private int month;
    private int day;
    private int year;

    // Constructor to initialize the instance variables
    Date() {
        Scanner scn = new Scanner(System.in);
        System.out.print("Enter the day (1-31): ");
        int day_val = scn.nextInt();
        if (day_val >= 1 && day_val <= 31) { 
            day = day_val;
        } else {
            System.out.println("Invalid day");
            day = 1;
        }
        System.out.print("Enter the month (1-12): ");
        int month_val = scn.nextInt();
        if (month_val >= 1 && month_val <= 12) {
            month = month_val;
        } else {
            System.out.println("Invalid month");
            month = 1;
        }
        
        System.out.print("Enter the year: ");
        int year_val = scn.nextInt();
        if (year_val >= 2000) { 
            year = year_val;
        } else {
            System.out.println("Invalid day");
            year = 2000;
        }
    }

    
    

   
    
    public void setDay(int day) {
        if (day >= 1 && day <= 31) { // Simple validation assuming all months have 31 days
            this.day = day;
        } else {
            System.out.println("Invalid day. Setting default value: 1.");
            this.day = 1;
        }
    }
    
    public void setMonth(int month_val) {
        if (month_val >= 1 && month_val <= 12) {
            this.month = month_val;
        } else {
            System.out.println("Invalid month. Setting default value: 1.");
            this.month = 1;
        }
    }

    
    public void setYear(int year_val)
    {
    	if (year_val >= 2000) { 
            year = year_val;
        } else {
            System.out.println("Invalid day");
            year = 2000;
        }
    }
    
    
    public void displayDate() {
        System.out.println("Date: " + day + "/" + month + "/" + year);
    }
}

class DateTest {

    public void runTest() {
        Date date1 = new Date();
        

        
        System.out.println("Date 1:");
        date1.displayDate();
        

        
        System.out.println("Updating Date 1...");
        date1.setDay(9);
        date1.setMonth(10);
        date1.setYear(2024);

        
        
        System.out.println("Updated Date 1:");
        date1.displayDate();
        
    }
}
