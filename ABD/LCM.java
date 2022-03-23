import java.util.Scanner;

public class LCM {
    public static void main(String[] args) {
        System.out.println("Enter Numbers:");
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        int max=0;
        n1 > n2?max=n1:max=n2;
        for (int i = max; (i < n1 && i < n2); i--) {
            if(n1%i==0 && n2%i==0){
                System.out.println(i);
            }
        }
        sc.close();
    }
}
