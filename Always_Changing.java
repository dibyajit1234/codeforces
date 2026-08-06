import java.util.*;
public class Always_Changing{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0){
        int n = sc.nextInt();
        String s = sc.next();
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == '0') {
                count0++;
            } else {
                count1++;
            }
        }
        if (Math.abs(count0 - count1) > 2) {
            System.out.println(-1);
            continue;
        }
        int maxBlocks = 1;
        for (int i = 1; i < n; i++) {
            if (s.charAt(i) != s.charAt(i - 1)) {
                maxBlocks++;
            }
        }
        int lenEqual = 0;     
        int lenExtraZero = 0;
        int lenExtraOne = 0;
        char firstChar = s.charAt(0);
        if (maxBlocks % 2 == 0) {
            lenEqual = maxBlocks;
            lenExtraZero = maxBlocks - 1;
            lenExtraOne = maxBlocks - 1;
        } else {
            if (firstChar == '0') {
                lenExtraZero = maxBlocks;
                lenEqual = maxBlocks - 1;
                lenExtraOne = maxBlocks - 2;
            } else {
                lenExtraOne = maxBlocks;
                lenEqual = maxBlocks - 1;
                lenExtraZero = maxBlocks - 2;
            }
        }
        int bestRemainingLength = -1;
        for (int diff = -1; diff <= 1; diff++) {
            if (Math.abs((count0 - count1) - diff) <= 1) {
                
                if (diff == -1) {
                    bestRemainingLength = Math.max(bestRemainingLength, lenExtraOne);
                } else if (diff == 0) {
                    bestRemainingLength = Math.max(bestRemainingLength, lenEqual);
                } else if (diff == 1) {
                    bestRemainingLength = Math.max(bestRemainingLength, lenExtraZero);
                }
            }
        }
        if (bestRemainingLength == -1) {
            System.out.println(-1);
        } else {
            System.out.println(n - bestRemainingLength);
        }
    }
  }
}
