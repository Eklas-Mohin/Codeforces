import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Expression {

    public static int maxValue(int a, int b, int c) {
        int maxVal = Math.max(a * b * c, a + b + c);
        maxVal = Math.max(maxVal, a * (b + c));
        maxVal = Math.max(maxVal, (a + b) * c);

        return maxVal;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        int a = Integer.parseInt(reader.readLine());
        int b = Integer.parseInt(reader.readLine());
        int c = Integer.parseInt(reader.readLine());

        writer.println(maxValue(a, b, c));

        writer.flush();
    }
}
