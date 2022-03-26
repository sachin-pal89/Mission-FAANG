package com.company;
import java.util.Scanner;
public class Area_of_triangle_using_sides {
    public static void main(String[] args) {
        float a,b,c,s,area;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the side1 of triangle : ");
        a=sc.nextFloat();
        System.out.print("Enter the side2 of triangle : ");
        b=sc.nextFloat();
        System.out.print("Enter the side3 of triangle : ");
        c=sc.nextFloat();
        s=(a+b+c)/2;
        area= (float) Math.sqrt(s*(s-a)*(s-b)*(s-c));
        System.out.format("Area of triangle is : %.3f Sqm" , area);
    }
}
