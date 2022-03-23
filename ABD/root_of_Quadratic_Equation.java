import java.util.Scanner;

public class root_of_Quadratic_Equation {
    public static void main(String[] args) {
        System.out.println("Enter values of co-efficients:");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        double det = (b * b) - (4 * a * c);
        double r1 = 0, r2 = 0,rr1=0,ri1=0;
        if (det < 0) {
            System.out.println("Imaginary Roots");
            rr1 = -b/(2*a);
            ri1 = (Math.sqrt(-det)) / (2 * a);
            System.out.println("Roots are" + (int)rr1 + "+i" + Math.round(ri1)+","+ (int)rr1 + "-i" + Math.round(ri1));
        } else {
            r1 = (-b + (Math.sqrt(det))) / (2 * a);
            r2 = (-b - (Math.sqrt(det))) / (2 * a);
            System.out.println("Roots are" + r1 + "," + r2);
        }
        sc.close();
    }
}
