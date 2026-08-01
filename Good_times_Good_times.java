import java.util.*;
public class Good_times_Good_times{
  public static void main(String a[]) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0){
      int n = sc.nextInt();
      int count=0;
      while(n>0){
        count++;
        n= n/10;
      }
      System.out.println((int)Math.pow(10,count)+1);
    }
  }
}
