import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] array = new int[9];
        int total = 0;
        int arrayTotal = 0;
        for (int i = 0; i < 9; i++) {
            array[i] = in.nextInt();
            arrayTotal += array[i];
        }

        for (int i = 0; i < 9; i++) {
            total = arrayTotal;
            for (int j = i + 1; j < 9; j++) {
                total = arrayTotal;
                total -= (array[i] + array[j]);
                if (total == 100) {
                    array[i] = 0;
                    array[j] = 0;
                    break;
                } 
            }
            if (total == 100) {
                break;
            }
        }

        Arrays.sort(array);
        for (int i = 0; i < 9; i++) {
            if (array[i] == 0) continue;
            System.out.println(array[i]);
        }
    }
}