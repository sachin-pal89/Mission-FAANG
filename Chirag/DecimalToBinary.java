import java.util.Scanner;
 
public class DecimalToBinary
{
	public static void main(String[] args) {
	    Scanner in= new Scanner(System.in);
	    int i=1, binary=0, rem;
		System.out.println("Enter a number");
		int num = in.nextInt();
		
		while(num!=0){
		    rem = num%2;
		    binary += i*rem;    
		    num = num/2;
		    i=i*10;
		}
		
		//Output the binary number
		System.out.println("Binary: "+ binary);
	}
}