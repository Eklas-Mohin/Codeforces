import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Team {

    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        int n = Integer.parseInt(reader.readLine());
        int ans = 0;

        while (n-- > 0) {
            String[] in = reader.readLine().split(" ");
            int a = Integer.parseInt(in[0]);
            int b = Integer.parseInt(in[1]);
            int c = Integer.parseInt(in[2]);

            if (a + b + c > 1) {
                ans += 1;
            }
        }

        writer.println(ans);

        writer.flush();
    }
}
