package com.company;
import java.util.Scanner;
public class Area_of_Triangle {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      float base,height,area;
        System.out.print("Enter base of triangle : ");
        base=sc.nextFloat();
        System.out.print("Enter height of triangle : ");
        height=sc.nextFloat();
        area=(base*height)/2;
        System.out.print("Area of triangle is : " + area);
    }
}
