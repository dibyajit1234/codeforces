import java.io.*;
import java.util.*;
public class Party_Monster{
  public static void main(String args[])throws Exception{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while(t-->0){
      StringTokenizer st = new StringTokenizer(br.readLine());
      int n = Integer.parseInt(st.nextToken());
      st = new StringTokenizer(br.readLine());
      String s = st.nextToken();
      int ans =0;
      for(char c:s.toCharArray()){
        if(c=='(')ans++;
        else ans--;
      }
      System.out.println(ans==0?"Yes":"No");
    }
  }
}
