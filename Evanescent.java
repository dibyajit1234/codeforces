import java.util.*;
public class Evanescent{
  public static void main(String args[]){
    Scanner sc  = new Scanner (System.in);
    int t = sc.nextInt();
    while(t-->0){
            int n = sc.nextInt();
            String s = sc.next();
            int count = 1;
            for (int i = 1; i < n; i++) {
                if (s.charAt(i) != s.charAt(i - 1))
                    count++;
            }
            int ans = Integer.MAX_VALUE;
            for (int i = 1; i < n - 1; i++) {
                int before = 0;
                if (s.charAt(i) != s.charAt(i - 1))
                    before++;
                if (s.charAt(i) != s.charAt(i + 1))
                    before++;
                int after = (s.charAt(i - 1) != s.charAt(i + 1)) ? 1 : 0;
                ans = Math.min(ans, count - before + after);
            }
            System.out.println(ans);
    }
  }
}
