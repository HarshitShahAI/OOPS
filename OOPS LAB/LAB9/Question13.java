package com.oopslab.LAB8;

interface Function {
    int evaluate(int x);
}

class Half implements Function {

    public int evaluate(int x) {
        return x / 2;
    }

}

public class Question13 {

    public static void main(String[] args) {
        int[] array = {8, 10, 24, 32};
        int[] resultArray = processArray(array);

        for (int val : resultArray) {
            System.out.println(val);
        }
    }

    public static int[] processArray(int[] arr) {
        int[] newArray = new int[arr.length];
        Function halfFunction = new Half();

        for (int i = 0; i < arr.length; i++) {
            newArray[i] = halfFunction.evaluate(arr[i]);
        }

        return newArray;
    }

}




