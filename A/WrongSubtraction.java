import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class WrongSubtraction {

    public static int wrongSubtraction(int n, int k) {
        while (k-- > 0) {
            if (n % 10 == 0) {
                n = n / 10;
            } else {
                n = n - 1;
            }
        }
        return n;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        String[] inputLine = reader.readLine().split(" ");
        int n = Integer.parseInt(inputLine[0]);
        int k = Integer.parseInt(inputLine[1]);

        writer.println(wrongSubtraction(n, k));

        writer.flush();

    }
}
