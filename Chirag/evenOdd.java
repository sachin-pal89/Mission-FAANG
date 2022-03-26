package com.company;
import java.util.*;
public class evenOdd {
    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        if (a%2==0){
            System.out.println("Number is Even");
        }else {
            System.out.println("Number is odd");
        }
    }
}
