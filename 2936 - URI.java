import java.util.Scanner;

public class Main {
	public static void main(String[]args) {
		int a, b, c, d, e, x;
		try (Scanner sc = new Scanner(System.in)){
			a = sc.nextInt();
			b = sc.nextInt();
			c = sc.nextInt();
			d = sc.nextInt();
			e = sc.nextInt();
		}
		
		x = 225 + (a*300) + (b*1500) + (c*600) + (d*1000) + (e*150);
		System.out.println(x);
	}

}