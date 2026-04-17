import java.util.*;
import java.io.*;
public class Need_More_Arrays{

  public static void main (String []args)throws Exception{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while(t-->0){
      StringTokenizer st = new StringTokenizer(br.readLine());
      int n = Integer.parseInt(st.nextToken());
      st = new StringTokenizer(br.readLine());
      int []a = new int[n];
      for(int i=0;i<n;i++)a[i]= Integer.parseInt(st.nextToken());
      int ans =1,temp=a[0];
      for(int i=1;i<n;i++){
        if(temp+1<a[i]){
          ans++;
          temp=a[i];
        }
      }
      System.out.println(ans);
    }
  }
}
