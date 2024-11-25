package com.oopslab.LAB7;

import java.util.Scanner;

public class Question9 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        System.out.print("Enter password: ");
        String password = scn.nextLine();
        boolean isValid = validatePassword(password);
        if (isValid) {
            System.out.println("Password is valid.");
        } else {
            System.out.println("Password is invalid.");
        }
    }

    public static boolean validatePassword(String password) {
        if (password.length() < 5 || password.length() > 12) {
            return false;
        }
        boolean hasLowerCase = false;
        boolean hasDigit = false;
        boolean hasUpperCaseOrSpecial = false;
        
        for (int i = 0; i < password.length(); i++) {
            char ch = password.charAt(i);
            if (Character.isLowerCase(ch)) {
                hasLowerCase = true;
            }
            if (Character.isDigit(ch)) {
                hasDigit = true;
            }
            if (Character.isUpperCase(ch) || !Character.isLetterOrDigit(ch)) {
                hasUpperCaseOrSpecial = true;
            }
        }
        
        if (!hasLowerCase || !hasDigit || hasUpperCaseOrSpecial) {
            return false;
        }
        
        for (int i = 0; i < password.length() - 1; i++) {
            if (password.charAt(i) == password.charAt(i + 1)) {
                return false;
            }
        }
        
        return true;
    }
}
