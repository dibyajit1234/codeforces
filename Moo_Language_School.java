import java.util.*;
public class Moo_Language_School{
  public static void main(String a[]){
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0){
      int n=sc.nextInt(),k = sc.nextInt(),ans = 0;
      String s = sc.next();
      for(int i=0;i<n;i+=k){
        char c = s.charAt(i);
        boolean flag =false;
        int temp=0;
        while(temp<k){
          if(s.charAt(i+temp)=='0')flag=true;
          temp++;
        }
        if(!flag)ans++;
      }
      System.out.println(ans);
    }
  }
}
