package com.oopslab.LAB8;

import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;

public class Question10 {
	
    public static void ClassFrequency()
    {
    	Scanner scn=new Scanner(System.in);
    	System.out.println("Enter the string: ");
    	String str=scn.next();
    	
    	Scanner scn2=new Scanner(System.in);
    	System.out.println("Enter the count of character: ");
    	Integer n=scn2.nextInt();
    	
    	HashMap<Character,Integer> FreqMap=new HashMap<>();
    	
        for(char c:str.toCharArray())
        {
        	FreqMap.put(c, FreqMap.getOrDefault(c,0)+1);
        }
        
        for(Map.Entry<Character, Integer> entry:FreqMap.entrySet())
        {
        	
        	if(entry.getValue()>n)
        	{
//        		System.out.println(entry instanceof Map.Entry<Character, Integer>);
        		System.out.println(entry.getKey()+":"+entry.getValue());
        	}
        }
    	
    }
	
	public static void main(String[] args)
	{
       ClassFrequency();
	}

}
