import java.util.*;
import java.io.*;
public class Letter_Home{
  public static void main(String []args)throws Exception{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while(t-->0){
      StringTokenizer st = new StringTokenizer(br.readLine());
      int n = Integer.parseInt(st.nextToken());
      int s = Integer.parseInt(st.nextToken());
      
      st = new StringTokenizer(br.readLine());
      int []a = new int[n+1];

      for(int i=0;i<n;i++)a[i]=Integer.parseInt(st.nextToken());
      int minDist = Math.min(Math.abs(s-a[0]),Math.abs(a[n-1]-s));
      //int maxDist = Math.max(Math.abs(s-a[0]),Math.abs(a[n-1]-s));
      System.out.println(minDist +a[n-1]-a[0]);      
    }
  }
}
