import java.io.*;
import java.util.*;
public class Koshary{
  public static void main(String args[])throws Exception{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while(t-->0){
      StringTokenizer st = new StringTokenizer(br.readLine());
      int x = Integer.parseInt(st.nextToken());
      int y = Integer.parseInt(st.nextToken());
      int ans =0;
      if(x%2!=0)ans++;
      if(y%2!=0)ans++;
      System.out.println(ans<2?"Yes":"No");
    }
  }
}
