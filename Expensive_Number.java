import java.util.*;
public class Expensive_Number{
  public static void main(String a[]){
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0){
      int n = sc.nextInt();
      int count=0;
      boolean flag = false;
      while(n>0){
        int digit = n%10;
        if(digit==0){
          flag = true;
          n/=10;
          continue;
        }
        count++;
        n/=10;
      }
      System.out.println(flag?count:count-1);
    }
  }
}
