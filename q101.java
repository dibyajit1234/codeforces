import java.io.*;
import java.util.*;
public class q101 {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }
        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    String line = br.readLine();
                    if (line == null) return null;
                    st = new StringTokenizer(line);
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        int nextInt() {
            return Integer.parseInt(next());
        }
    }
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        String tStr = sc.next();
        if (tStr == null) return;
        int t = Integer.parseInt(tStr);
        StringBuilder sb = new StringBuilder();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] animals = new int[n];
            int first1 = -1;
            int last1 = -1;
            int firstMinus1 = -1;
            int lastMinus1 = -1;
            for (int i = 0; i < n; i++) {
                animals[i] = sc.nextInt();
                if (animals[i] == 1) {
                    if (first1 == -1) first1 = i;
                    last1 = i;
                }
                if (animals[i] == -1) {
                    if (firstMinus1 == -1) firstMinus1 = i;
                    lastMinus1 = i;
                }
            }
            for (int i = 0; i < n; i++) {
                if (animals[i] == -1) {
                    if (first1 == -1) { 
                        if (i == firstMinus1 && firstMinus1 != lastMinus1) {
                            animals[i] = 1;
                        } else if (i == lastMinus1 && firstMinus1 != lastMinus1) {
                            animals[i] = 1;
                        } else {
                            animals[i] = 0;
                        }
                    } else {            
                        if (i == firstMinus1 && i < first1) {
                            animals[i] = 1;
                        } else if (i == lastMinus1 && i > last1) {
                            animals[i] = 1;
                        } else {
                            animals[i] = 0;
                        }
                    }
                }
                sb.append(animals[i]).append(i == n - 1 ? "" : " ");
            }
            sb.append("\n");
        }
        System.out.print(sb);
    }
}
