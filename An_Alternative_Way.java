import java.util.*;
public class An_Alternative_Way{
  public static void main(String args[]) {
    
  
  Scanner sc  = new Scanner(System.in);
  int t = sc.nextInt();
  while(t-->0){
  int n = sc.nextInt();
  int []a = new int[n], b = new int[n];
  for(int i=0;i<n;i++)a[i] = sc.nextInt();
  for(int i=0;i<n;i++)b[i] = sc.nextInt();
  for(int i=1;i<n;i++)a[i]+=a[i-1];

  for(int i=1;i<n;i++)b[i]+=b[i-1];
  boolean ans = true;
  for(int i=0;i<n;i++)if(a[i]>b[i]){
    ans = false;
    break;
  }
  System.out.println(ans?"Yes":"No");
  }
  }
}
