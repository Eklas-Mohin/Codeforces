import java.io.IOException;
import java.util.Scanner;

public class NextRound {

    public static void main(String[] args) throws IOException {
        try (Scanner scan = new Scanner(System.in)) {
            int n, k, ans = 0;
            int[] arr = new int[51];

            n = scan.nextInt();
            k = scan.nextInt();

            for (int i = 0; i < n; ++i) {
                arr[i] = scan.nextInt();
            }

            for (int i = 0; i < k; ++i) {
                if (arr[i] > 0) {
                    ans += 1;
                } else {
                    break;
                }
            }   
            
            for (int i = k; i < n; ++i) {
                if (arr[i] == arr[i - 1] && arr[i] > 0) {
                    ans += 1;
                } else {
                    break;
                }
            }
            
            System.out.println(ans);   
        }
    }
}
