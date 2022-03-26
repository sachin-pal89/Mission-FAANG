package com.company;
import java.util.Scanner;

public class CheckingInteger {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        int value= sc.nextInt();
        boolean check= sc.hasNextInt();
        if(check==true){
            System.out.println("Number is Integer");
        }
        else{
            System.out.println("Number is not integer");
        }

    }

}