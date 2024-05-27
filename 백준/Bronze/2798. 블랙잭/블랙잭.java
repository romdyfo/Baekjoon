import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int M = in.nextInt();

        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = in.nextInt();
        }

        int result = 0;
        for (int i = 0; i < N; i++) {
            for (int j = i+1; j < N; j++) {
                for (int k = j+1; k< N; k++) {
                    if ((array[i] + array[j] + array[k]) > M) continue;
                    else if ((array[i] + array[j] + array[k]) > result) result = array[i] + array[j] + array[k];
                }
            }
        }

        System.out.println(result);
    }
}