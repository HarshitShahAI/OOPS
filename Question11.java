package com.oopslab.LAB8;

import java.util.HashSet;
import java.util.Map;
import java.util.Scanner;

public class Question11 {
	
	public static boolean prefect_string()
	{
		Scanner scn=new Scanner(System.in);
		System.out.print("Enter the string: ");
		String str=scn.next();
		scn.close();
		
		HashSet<Character> Charset=new HashSet<>();
		
		for(char c:str.toCharArray())
		{
			if(Charset.contains(c))
			{
				return false;
			}
			Charset.add(c);
			
				
		}
		return true;
		
		
	}
	
	public static void main(String[] args)
	{
		if(prefect_string())
		{
			System.out.println("Prefect string");
		}
		else
		{
			System.out.println("Not a prefect string");
		}
		
	}

}
