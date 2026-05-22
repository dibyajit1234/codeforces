import java.util.*;
import java.io.*;
public class Another_Sorting_Problem{
  public static void main(String args[])throws Exception{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while(t-->0){
      StringTokenizer st = new StringTokenizer(br.readLine());
      int n = Integer.parseInt(st.nextToken());
      st = new StringTokenizer(br.readLine());
      int[]a = new int[n];
      for(int i=0;i<n;i++)a[i]=Integer.parseInt(st.nextToken());
      long max_k =0;
      for(int i=0;i<n-1;i++){
        max_k = Math.max(max_k,a[i]-a[i+1]);
      }
      boolean ans = true;
      long flag = a[0];
      for(int i=1;i<n;i++){
        if(a[i]>=flag)flag=a[i];
        else if(a[i]+max_k>=flag)flag =a[i]+max_k;
        else {
          ans = false;
          break;
        }

      }
      
      System.out.println(ans?"Yes":"No");

    }
  }
}
