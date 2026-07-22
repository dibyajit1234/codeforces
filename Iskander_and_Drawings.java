import java.util.*;
public class Iskander_and_Drawings{
  public static void main(String a[]){
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0){
      int n = sc.nextInt();
      String s = sc.next();
      int ans =0,count=0;
      for(char c:s.toCharArray()){
        if(c=='*')count=0;
        else count++;
        ans = Math.max(ans,(count+1)/2);
      }
      System.out.println(ans);
    }
  }

}
