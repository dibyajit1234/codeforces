import java.util.*;
public class Marenol {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            String a = sc.next();
            String b = sc.next();
            int evena = 0, odda = 0;
            int evenb = 0, oddb = 0;
            for (int i = 0; i < n; i++) {
                if (a.charAt(i) == '1') {
                    if (i % 2 == 0) evena++;
                    else odda++;
                }
                if (b.charAt(i) == '1') {
                    if (i % 2 == 0) evenb++;
                    else oddb++;
                }
            }
            if (evena == evenb && odda == oddb)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
