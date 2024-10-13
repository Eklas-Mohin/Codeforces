/*****************************
*   author:  mohin           *
*   problem: Codeforces 1A   *
*   verdict: Accepted        *
******************************/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class TheatreSquare {

    public static long numOfFlagstones(long n, long m, long a) {
        long r = (n + a - 1) / a;
        long c = (m + a - 1) / a;

        return r * c;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        String[] input = reader.readLine().split(" ");

        long n = Integer.parseInt(input[0]);
        long m = Integer.parseInt(input[1]);
        long a = Integer.parseInt(input[2]);

        writer.println(numOfFlagstones(n, m, a));

        writer.flush();
    }
}
