import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int SIZE = in.nextInt();
		int price = in.nextInt();
		int[] coinType = new int[SIZE];
		int count = 0;
		
		for(int i = 0; i < SIZE; i++) {
			coinType[i] = in.nextInt();
		}
		
		for(int i = SIZE - 1; i >= 0; i--) {
			count += price / coinType[i]; 
			price %= coinType[i];
		}
		System.out.println(count);
		
	}
}