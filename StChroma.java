import java.util.*;
import java.io.*;
public class StChroma{
  public static void main(String args[]) {
 
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0){
      int n = sc.nextInt(),x = sc.nextInt();
      if(n!=1)
      for(int i=0;i<n;i++){
        if(i==x)continue;
        System.out.print(i+" ");
      }
      if(n==1)System.out.println(0);
      else if (n==x)System.out.println();
      else System.out.println(n==1?0:x);
    }
  }
}
