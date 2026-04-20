import java.util.*;
import java.io.*;
public class False_Alarm{
  public static void main(String args[]) throws Exception{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while(t-->0){
      StringTokenizer st = new StringTokenizer(br.readLine());
      int n = Integer.parseInt(st.nextToken()),x = Integer.parseInt(st.nextToken());
      int []a = new int[n];
      st = new StringTokenizer(br.readLine());
      for(int i=0;i<n;i++)a[i]=Integer.parseInt(st.nextToken());
      int index =0;
      while(a[index]!=1)index++;
      if(index ==n-1){
        System.out.println("Yes");
        continue;
      }
      boolean ans = true;
      while(index+x<n){
        if(a[index+x]==1){
          ans = false;
          break;
        }
        index++;
      }
      System.out.println(ans?"Yes":"No");

    }
  }
}
