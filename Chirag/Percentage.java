package com.company;
import com.sun.jdi.FloatType;

import java.util.Scanner;
public class Percentage {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sub1,sub2,sub3,sub4,sub5;
        int totalMarks=500;
        System.out.print("Enter Marks for Subject 1 : ");
        sub1=sc.nextInt();
        System.out.print("Enter Marks for Subject 2 : ");
        sub2=sc.nextInt();
        System.out.print("Enter Marks for Subject 3 : ");
        sub3=sc.nextInt();
        System.out.print("Enter Marks for Subject 4 : ");
        sub4=sc.nextInt();
        System.out.print("Enter Marks for Subject 5 : ");
        sub5=sc.nextInt();
        float marksGot=sub1+sub2+sub3+sub4+sub5;
        System.out.println("Total Marks is : "+marksGot);
        float percentage =  (marksGot/totalMarks)*100;
        System.out.println("Percentage of Student is : " + percentage);

    }
}
