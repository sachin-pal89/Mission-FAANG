import java.util.Scanner;

public class Pattern1 {
    public static void main(String[] args) {
        Scanner in= new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        for (int i = 0; i <=a-1 ; i++) {
            for (int j = 0; j <=b-1; j++) {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
}
