import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
	int a = 0;
	try (Scanner sc = new Scanner(System.in)) {
		a = sc.nextInt();
	}
	if(a>0 && a<36) {
		System.out.println("D");
	}
	if(a>35 && a<61) {
		System.out.println("C");
	}
	if(a>60 && a<86) {
		System.out.println("B");
	}
	if(a>85 && a<101) {
		System.out.println("A");
	}
	if(a==0) {
		System.out.println("E");
	}

	}
}