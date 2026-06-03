import java.util.*;
import java.io.*;
public class Dr_TC{
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0){
      int n=sc.nextInt();
      String s = sc.next();
      int ans=0;
      for(char x:s.toCharArray()){
        if(x=='1')ans+=n-1;
        else ans++;
      }
      System.out.println(ans);
    }
  }
}
