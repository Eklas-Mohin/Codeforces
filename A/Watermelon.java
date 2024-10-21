import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Watermelon {

    public static boolean isPossible(int w) {
        return w > 2 && w % 2 == 0;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        int watermelonWeight = Integer.parseInt(reader.readLine());

        if (isPossible(watermelonWeight)) {
            writer.println("YES");
        } else {
            writer.println("NO");
        }

        writer.flush();
    }
}

