/*****************************
 *   author:  mohin          *
 *   problem: Codeforces 4A  *
 *   verdict: Accepted       *
 *****************************/

import java.lang.*;
import java.io.*;
import java.util.*;

public class Watermelon {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        
        int w = Integer.parseInt(br.readLine());
 
        if (w > 2 && w % 2 == 0) {
            out.println("YES");
        } else {
            out.println("NO");
        }
        
        out.flush();
    }
}
