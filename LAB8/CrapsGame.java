package com.oopslab.LAB7;

import java.util.Random;
import java.util.Scanner;

enum GameResult {
    WIN, LOSE, CONTINUE
}

public class CrapsGame {
    private int rollDice() {
        Random rand = new Random();
        return rand.nextInt(6) + 1 + rand.nextInt(6) + 1;
    }

    private GameResult checkResult(int sum) {
        switch (sum) {
            case 7:
            case 11:
                return GameResult.WIN;
            case 2:
            case 3:
            case 12:
                return GameResult.LOSE;
            default:
                return GameResult.CONTINUE;
        }
    }

    public void playGame() {
        Scanner scn = new Scanner(System.in);
        System.out.println("Welcome to the Craps Game!");

        int sum = rollDice();
        System.out.println("You rolled: " + sum);
        
        GameResult result = checkResult(sum);
        
        if (result == GameResult.WIN) {
            System.out.println("You win!");
            return;
        } else if (result == GameResult.LOSE) {
            System.out.println("Craps! You lose.");
            return;
        }

        int points = sum;
        System.out.println("Your point is: " + points);
        
        while (true) {
            sum = rollDice();
            System.out.println("You rolled: " + sum);
            if (sum == points) {
                System.out.println("You made your point! You win!");
                break;
            } else if (sum == 7) {
                System.out.println("You rolled a 7! You lose.");
                break;
            }
        }
    }

    public static void main(String[] args) {
        CrapsGame game = new CrapsGame();
        game.playGame();
    }
}
