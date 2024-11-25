package com.oopslab.LAB8;

import java.util.Scanner;

public class Question3 {

    public static void main(String[] args) {
        EmployeeTest test = new EmployeeTest();
        test.runTest();
    }

}

class Employee {
    private String name;
    private String lastName;
    private double monthlySalary;

   
    Employee() {
        Scanner scn = new Scanner(System.in);
        System.out.print("Enter the first name: ");
        name = scn.next();
        System.out.print("Enter the last name: ");
        lastName = scn.next();
        System.out.print("Enter the monthly salary: ");
        double monthlySalary_val = scn.nextDouble();
        if (monthlySalary_val > 0) {
            monthlySalary = monthlySalary_val;
        } else {
            monthlySalary = 0;
        }
    }

    public double getYearlySalary() {
        return monthlySalary * 12;
    }

    
    public void Bouns() {
    	monthlySalary += monthlySalary * (0.1);
    }

    public void displayEmployee() {
        System.out.println("Employee Name: " + name + " " + lastName);
        System.out.println("Monthly Salary: $" + monthlySalary);
        System.out.println("Yearly Salary: $" + getYearlySalary());
    }
}

class EmployeeTest {

    public void runTest() {
        Employee emp1 = new Employee();
        Employee emp2 = new Employee();

        
        System.out.println("Initial details of Employee 1:");
        emp1.displayEmployee();
        System.out.println("Initial details of Employee 2:");
        emp2.displayEmployee();


        emp1.Bouns();
        emp2.Bouns();

       
        System.out.println("Details after 10% raise:");
        System.out.println("Employee 1 after raise:");
        emp1.displayEmployee();
        System.out.println("Employee 2 after raise:");
        emp2.displayEmployee();
    }
}
