/*****************************
 *   author:  mohin          *
 *   problem: Codeforces 71A *
 *   verdict: Accepted       *
 *****************************/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class WayTooLongWords {

    public static String abbreviateWord(String word) {
        int length = word.length();
        if (length > 10) {
            return word.charAt(0) + String.valueOf(length - 2) + word.charAt(length - 1);
        }
        return word;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        int numberOfWords = Integer.parseInt(reader.readLine());

        for (int i = 0; i < numberOfWords; i++) {
            String word = reader.readLine();
            writer.println(abbreviateWord(word));
        }

        writer.flush();
    }
}
