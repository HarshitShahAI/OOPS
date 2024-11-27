package com.oopslab.LAB7;

import java.util.Scanner;

public class Question6 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        System.out.print("Enter car category (SUV, SEDAN, ECONOMY, MINI): ");
        String category = scn.next().toUpperCase();
        String model = getCarModel(category);
        System.out.println("The car model available in " + category + " category: " + model);
    }

    public static String getCarModel(String category) {
        switch (category) {
            case "SUV":
                return "TATA SAFARI";
            case "SEDAN":
                return "TATA INDIGO";
            case "ECONOMY":
                return "TATA INDICA";
            case "MINI":
                return "TATA NANO";
            default:
                return "Invalid category";
        }
    }
}
