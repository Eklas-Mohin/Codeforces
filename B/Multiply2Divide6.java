
/** ******************************
 *   author:  mohin              *
 *   problem: Codeforces 1374B   *
 *   verdict: Accepted           *
 *********************************/

import java.util.Scanner;

public class Multiply2Divide6 {

    public static void main(String[] args) {
        try (Scanner scan = new Scanner(System.in)) {
            int t = scan.nextInt();

            while (t-- > 0) {
                int n = scan.nextInt();
                int two = 0, three = 0;

                while (n % 2 == 0) {
                    n /= 2;
                    two++;
                }

                while (n % 3 == 0) {
                    n /= 3;
                    three++;
                }

                if (n != 1 || two > three) {
                    System.out.println(-1);
                } else {
                    System.out.println(2 * three - two);
                }
            }
        }
    }
}
