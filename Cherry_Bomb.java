import java.util.*;
import java.io.*;
public class Cherry_Bomb{
    public static Scanner sc = new Scanner(System.in);
  public static void main(String args[]) {
    int t = sc.nextInt();
    while(t-->0){
      solve();
    }
  }
  private static void solve(){
      int n = sc.nextInt(),k = sc.nextInt();
      int a[] = new int[n], b[]= new int [n];
      int diff =0,max =-1,count=0;
      for(int i=0;i<n;i++){
        a[i]=sc.nextInt();
        max = Math.max(max,a[i]);
      }

      for(int i=0;i<n;i++){
        b[i]= sc.nextInt();
      }
      int s=-1;
      for(int i=0;i<n;i++){
        if(b[i]!=-1){
          if(s==-1)s=a[i]+b[i];
          else {
            if(s!=a[i]+b[i]){
              System.out.println(0);
              return;
            }
          }
        }
        
      }
      if(s==-1){
        long low = 0;
        long high = Long.MAX_VALUE;

        for(int i=0;i<n;i++){
          low = Math.max(low, a[i]);
          high = Math.min(high, (long)a[i] + k);
        }

        System.out.println(Math.max(0, high - low + 1));
        return;
      }
      for(int i=0;i<n;i++){
        if(a[i]>s || s-a[i]>k){
          System.out.println(0);
          return;
        }
      }
      System.out.println(1);
  }
}
