import java.util.*;
import java.io.*;
public class Shrink{
  public static void main(String []args)throws Exception{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while(t-->0){
      StringTokenizer st = new StringTokenizer(br.readLine());
      int n = Integer.parseInt(st.nextToken());
      int m = n;
      int []a = new int[n];
      for(int i=2;i<=n;i++)System.out.print(i+" ");
      System.out.println(1);
    }
  }
}
