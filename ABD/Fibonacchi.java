import java.util.Scanner;

public class Fibonacchi {
    public static void main(String[] args) {
        System.out.println("Number of Elements?");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int f0 = 0;
        int f1 = 1;
        if (num == 1) {
            System.out.println(f0);
        } else {
            System.out.println(f0);
            System.out.println(f1);
        }
        int sum=0;
        while(sum<=num) {
            sum = f0 + f1;
            
            System.out.println(sum);
            f0 = f1;
            f1 = sum;
        }
        sc.close();
    }
}
