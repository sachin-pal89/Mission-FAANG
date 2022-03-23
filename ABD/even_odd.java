import java.util.Scanner;

public class even_odd {
   public static void main(String[] args) {
       System.out.println("Enter your number");
       Scanner sc = new Scanner(System.in);
       int num = sc.nextInt();
       if (num%2==0) {
           System.out.println("Even");
       }else{
           System.out.println("Odd");
       }
       sc.close();
   } 
}
