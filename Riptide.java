import java.util.*;
public class Riptide{
  public static void main(String a[]){
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while (t-- > 0) {
            int[] arr = new int[3];
            arr[0] = sc.nextInt();
            arr[1] = sc.nextInt();
            arr[2] = sc.nextInt();
            int rounds = 0;
            while (true) {
                Arrays.sort(arr);
                if (arr[0] == arr[1] || arr[1] == arr[2])break;
                arr[0]++;
                arr[2]--;
                rounds++;
            }
            System.out.println(rounds);
        }
  }
}
