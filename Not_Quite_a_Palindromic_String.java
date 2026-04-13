import java.util.*;
import java.io.*;
public class Not_Quite_a_Palindromic_String{
  public static void main(String []args)throws Exception {
    BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
    int t=Integer.parseInt(bf.readLine());
    while(t-->0){
      StringTokenizer st = new StringTokenizer(bf.readLine());
      int n = Integer.parseInt(st.nextToken());
      int k = Integer.parseInt(st.nextToken());
      st = new StringTokenizer(bf.readLine());
      String s = st.nextToken();
      int ones=0,zeros=0;
      for(char c:s.toCharArray()){
        if(c=='1')ones++;
        else zeros++;
      }
      int mn = Math.max(ones,zeros)-n/2;
      int mx = ones/2 +zeros/2;
      if(k>=mn && (k-mn)%2==0 && k<=mx)System.out.println("Yes");
      else System.out.println("No");
    }
  }
}
