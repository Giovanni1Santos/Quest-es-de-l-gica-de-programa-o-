import java.util.Scanner;

public class Main {
	public static void main (String[]args) {
		int a=0, i=1;
		try (Scanner sc = new Scanner(System.in)){
			a = sc.nextInt();
		}
		while(i<=a) {
			System.out.println(i + " " + (i*i) + " " + (i*i*i));
			i++;
		}
	}
}
