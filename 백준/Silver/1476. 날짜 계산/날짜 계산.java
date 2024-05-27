import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int E = in.nextInt();
        int S = in.nextInt();
        int M = in.nextInt();
        int year = 1;
        while (((year - E) % 15 != 0) || ((year - S) % 28 != 0) || ((year - M) % 19 != 0)) {
            year++;
        }

        System.out.println(year);
 
    }
}