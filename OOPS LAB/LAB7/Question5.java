package com.oopsJava.Lab6;

import java.util.Scanner;

class Mileage {
    private double totalMiles;
    private double totalGallons;
    private int tripCount;

    public void getData() {
        Scanner scn = new Scanner(System.in);
        System.out.print("Enter miles driven for the trip: ");
        double milesDriven = scn.nextDouble();
        System.out.print("Enter gallons used for the trip: ");
        double gallonsUsed = scn.nextDouble();

        totalMiles += milesDriven;
        totalGallons += gallonsUsed;
        tripCount++;
    }

    public double calculateMilesPerGallon(double milesDriven, double gallonsUsed) {
        return milesDriven / gallonsUsed;
    }

    public double getCombinedMilesPerGallon() {
        return totalMiles/totalGallons;
    }

    public void displayMileage() {
        double mpg = calculateMilesPerGallon(totalMiles, totalGallons);
        System.out.printf("Miles per gallon for this trip: %.2f%n", mpg);
        System.out.printf("Combined miles per gallon for all trips: %.2f%n", getCombinedMilesPerGallon());
    }
}

class MileageTest {
     public void runTest(){
        Mileage mileage = new Mileage();
        Scanner scn = new Scanner(System.in);
        int choice = 1;

        while (choice != 0) {
            mileage.getData();
            mileage.displayMileage();
            System.out.print("Enter the choice (0/1): ");
            choice = scn.nextInt();
        }
    }
}

public class Question5{
	
	public static void main(String[] args)
	{
		MileageTest test=new MileageTest();
		test.runTest();
	}
	
}


