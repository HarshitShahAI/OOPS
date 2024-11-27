package com.oopsJava.Lab6;

import java.util.Scanner;

public class Question1 {
	
	public static void main(String[] args)
	{
		DrivingCostCalculator Calculator=new DrivingCostCalculator();
		Calculator.calculateDailyDrivingCost();
	}

}

class DrivingCostCalculator{
	double miles;
	double costPerGallon;
	double avgMilesPerGallon;
	double tollsPerDay;
	double parkingFeesPerDay;
	
	DrivingCostCalculator()
	{
		Scanner scn=new Scanner(System.in);
		System.out.print("Enter the total miles per day: ");
		miles=scn.nextDouble();
		System.out.print("Enter the cost per gallon of gasoline: ");
		costPerGallon=scn.nextDouble();
		System.out.print("Enter the car's average miles per Gallon: ");
		avgMilesPerGallon=scn.nextDouble();
		System.out.print("Enter the tolls per day: ");
        tollsPerDay = scn.nextDouble();
        System.out.print("Enter the parking fees per day: ");
        parkingFeesPerDay = scn.nextDouble();	
	}
	
	public void calculateDailyDrivingCost() {
       
        double gasolineCostPerDay = (miles / avgMilesPerGallon) * costPerGallon;
        
        
        double totalCostPerDay = gasolineCostPerDay + tollsPerDay + parkingFeesPerDay;
        
        System.out.println("Total Cost Per Day: "+totalCostPerDay);
    }
	
		
}
