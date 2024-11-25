package com.oopslab.LAB7;


import java.util.Scanner;

public class Question12 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        System.out.print("Enter range: ");
        int a = scn.nextInt();
        int b = scn.nextInt();
        System.out.print("Enter pattern: ");
        String pattern = scn.next();
        int count = countPatternOccurrences(a, b, pattern);
        System.out.println("The number of times " + pattern + " occurred between " + a + " to " + b + ": " + count);
    }

    public static int countPatternOccurrences(int a, int b, String pattern) {
        int count = 0;
        for (int i = a; i <= b; i++) {
            if (String.valueOf(i).contains(pattern)) {
                count++;
            }
        }
        return count;
    }
}

