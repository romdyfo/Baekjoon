import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int price = 1000;
		int pay = price - in.nextInt();
		
		int count = 0;
		int[] coinTypes = {500, 100, 50, 10, 5, 1};
		
		for(int i = 0; i < coinTypes.length; i++) {	
			count += pay / coinTypes[i];
			pay %= coinTypes[i];
		}
		
		System.out.println(count);
		
	}
}