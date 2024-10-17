import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Word {

    public static String solve(String str) {
        int lower = 0, upper = 0;

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (Character.isLowerCase(ch)) {
                lower++;
            } else {
                upper++;
            }
        }

        if (upper > lower) {
            str = str.toUpperCase();
        } else {
            str = str.toLowerCase();
        }

        return str;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        String str = reader.readLine();

        writer.println(solve(str));

        writer.flush();
    }
}
