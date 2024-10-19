import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class CapsLock {

    public static String processWord(String strInput) {
        int cnt = 0;
        int length = strInput.length();

        for (int i = 0; i < length; i++) {
            if (Character.isUpperCase(strInput.charAt(i))) {
                cnt++;
            }
        }

        if (cnt == length) {
            return strInput.toLowerCase();
        } else if (cnt + 1 == length && Character.isLowerCase(strInput.charAt(0))) {
            strInput = strInput.toLowerCase();
            return Character.toUpperCase(strInput.charAt(0)) + strInput.substring(1);
        }

        return strInput;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        String strInput = reader.readLine().trim();
        writer.println(processWord(strInput));

        writer.flush();
    }
}
