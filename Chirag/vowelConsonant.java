package com.company;

import java.util.*;
import java.lang.Math.*;

public class vowelConsonant {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a,b,c,discriminant,root1,root2,realPart,imgPart;
        System.out.println("Enter coefficients a,b,c : ");
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();

        discriminant = b*b-4*a*c;

        if (discriminant>0){
            root1=(-b+Math.sqrt(discriminant))/(2*a);
            root2=(-b-Math.sqrt(discriminant))/(2*a);
            System.out.println("root1= "+root1 + "root2 = " + root2);
        }
        else if (discriminant==0){
            root1=root2=-b/(2*a);
            System.out.println("root1=root2= "+ root1);
        }
        else {
            realPart = -b/(2*a);
            imgPart = Math.sqrt(-discriminant)/(2*a);
            System.out.println("root1= "+realPart+"+"+imgPart+"i" + " root2= "+realPart+"-"+imgPart+"i");
        }
    }

}
