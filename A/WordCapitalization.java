import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class WordCapitalization {
    public static void main(String[] args) throws IOException {
        BufferedReader  reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        String str = reader.readLine();

        writer.println(Character.toUpperCase(str.charAt(0)) + str.substring(1));

        writer.flush();
    }

}
