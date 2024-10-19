import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class RaisingBacteria {

    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        int n = Integer.parseInt(reader.readLine());
        int res = 0;

        while (n > 0) {
            res += n % 2;
            n /= 2;
        }

        writer.println(res);

        writer.flush();

    }
}
