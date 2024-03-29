import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int Case;
		int count = 0;
	
		while (true) {
			int L = in.nextInt();
			int P = in.nextInt();
			int V = in.nextInt();
			
			if (L == 0 && P == 0 && V == 0) break;
			else if (L < (V % P)) Case = L * (V / P) + L;
			else Case = L * (V / P) + V % P;
			count++;
			System.out.printf("Case %d: %d\n", count, Case);
		}
		
	}
}