/*****************************
 *   author:  mohin          *
 *   problem: Codeforces 71A *
 *   verdict: Accepted       *
 *****************************/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class wayTooLongWords {

    public static String solve(String str) {
        int len = str.length();
        if (len > 10) {
            return str.charAt(0) + Integer.toString(len - 2) + str.charAt(len - 1);
        }
        return str;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        try (PrintWriter out = new PrintWriter(System.out)) {
            int n = Integer.parseInt(br.readLine());
            
            for (int i = 0; i < n; i++) {
                String str = br.readLine();
                out.println(solve(str));
            }
            
            out.flush();
        }
    }
}
